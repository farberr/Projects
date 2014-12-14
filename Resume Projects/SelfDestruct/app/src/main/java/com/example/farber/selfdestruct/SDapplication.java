package com.example.farber.selfdestruct;

import android.app.Application;
import com.parse.Parse;
import com.parse.ParseObject;
/**
 * Created by farber on 11/18/2014.
 */
public class SDapplication extends Application{
    @Override
    public void onCreate() {
        super.onCreate();
        Parse.initialize(this, "nmPi1siIKfgKdEYoO8XY49UqOCoa8RvjGyl69KEs", "QaD0V4uDvHEGu7Zk06etcZazeOtS4t0AFRb3cGUg");

    }
}
