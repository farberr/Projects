package com.example.farber.pedometer;

import android.app.Activity;
import android.content.Context;
import android.hardware.*;
import android.os.Bundle;
import android.widget.TextView;
import android.widget.Toast;
import android.location.Criteria;
import android.location.Location;
import android.location.LocationListener;
import android.location.LocationManager;


public class CounterActivity extends Activity implements SensorEventListener, LocationListener {
/*
http://developer.android.com/reference/android/app/Activity.html
SensorEventListener -receiving notifications from the SensorManager when sensor values have changed.
LocationListener- notifications from the LocationManager when the location has changed

 */
    private SensorManager sensorManager;  //lets you access the device's sensors.
    private TextView count;        //Displays text to the user and optionally allows them to edit it
    boolean activityRunning;

    private TextView latituteField;
    private TextView longitudeField;
    private LocationManager locationManager; //periodic updates of the devices geographical location
    private String provider;


    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_counter);
        count = (TextView) findViewById(R.id.count);
        sensorManager = (SensorManager) getSystemService(Context.SENSOR_SERVICE);

/*
SensorManager - sensorManager lets you access the device's sensors.
locationManager - provides access to the system location services

*/

        latituteField = (TextView) findViewById(R.id.TextView02);
        longitudeField = (TextView) findViewById(R.id.TextView04);

        // Get the location manager
        locationManager = (LocationManager) getSystemService(Context.LOCATION_SERVICE);
        // Define the criteria how to select the location provider
        Criteria criteria = new Criteria();
        provider = locationManager.getBestProvider(criteria, false);
        Location location = locationManager.getLastKnownLocation(provider);

        // Initialize the location fields
        if (location != null) {
            System.out.println("Provider " + provider + " has been selected.");
            onLocationChanged(location);
        } else {
            latituteField.setText("Location not available");
            longitudeField.setText("Location not available");
        }
    }

    @Override
    protected void onResume() {
        super.onResume();
        activityRunning = true;
        Sensor countSensor = sensorManager.getDefaultSensor(Sensor.TYPE_STEP_COUNTER);
        // Class representing a sensor, we want STEP_COUNTER for pedometer
        // Starts recording
        if (countSensor != null) {
            sensorManager.registerListener(this, countSensor, SensorManager.SENSOR_DELAY_UI);
        } else {
            Toast.makeText(this, "Count sensor not available!", Toast.LENGTH_LONG).show();
            // Toast is useful for debugging
        }
        locationManager.requestLocationUpdates(provider, 400, 1, this);
        //register for location updates using a Criteria and pending intent.

    }

    @Override
    protected void onPause() {
        super.onPause();
        activityRunning = false;
        // if you unregister the last listener, the hardware will stop detecting step events
        // sensorManager.unregisterListener(this);
        locationManager.removeUpdates(this);
        //Removes all location updates for the specified pending intent
    }

    @Override
    public void onSensorChanged(SensorEvent event) {
        if (activityRunning) {
            count.setText(String.valueOf(event.values[0]));
        }
            // Above updates text on step counter
    }

    @Override
    public void onAccuracyChanged(Sensor sensor, int accuracy) {
        // Null for now, want to improve for later
    }

    @Override
    public void onLocationChanged(Location location) {
        float lat = (float) (location.getLatitude());
        float lng = (float) (location.getLongitude());
        latituteField.setText(String.valueOf(lat));
        longitudeField.setText(String.valueOf(lng));
        // The actual numbers
    }

    @Override
    public void onStatusChanged(String provider, int status, Bundle extras) {
        // Null for now, want to improve for later

    }

    @Override
    public void onProviderEnabled(String provider) {
        Toast.makeText(this, "Enabled new provider " + provider,
                Toast.LENGTH_SHORT).show();
        //Debugging
    }

    @Override
    public void onProviderDisabled(String provider) {
        Toast.makeText(this, "Disabled provider " + provider,
                Toast.LENGTH_SHORT).show();
        //Debugging
    }
}
