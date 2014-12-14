package com.example.farber.selfdestruct;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.Intent;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.view.Window;
import android.widget.Button;
import android.widget.EditText;

import com.parse.ParseException;
import com.parse.ParseUser;
import com.parse.SignUpCallback;


public class SignUpActivity extends Activity {

    protected EditText mUsername;
    protected EditText mPassword;
    protected EditText mEmail;
    protected Button mSignUp;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        requestWindowFeature(Window.FEATURE_INDETERMINATE_PROGRESS);
        setContentView(R.layout.activity_sign_up);


         mUsername = (EditText)findViewById(R.id.usernameField);
         mPassword = (EditText)findViewById(R.id.passwordField);
         mEmail = (EditText)findViewById(R.id.emailField);
         mSignUp= (Button) findViewById(R.id.SignUp);
         mSignUp.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String username = mUsername.getText().toString();
                String password = mPassword.getText().toString();
                String email = mEmail.getText().toString();

                username = username.trim();
                password = password.trim();
                email = email.trim();

                if (username.isEmpty() || password.isEmpty() || email.isEmpty()) {
                    AlertDialog.Builder builder = new AlertDialog.Builder(SignUpActivity.this);
                    builder.setMessage(R.string.signup_error_message)
                   .setTitle(R.string.signup_error_title)
                    .setPositiveButton(android.R.string.ok, null);

                    AlertDialog dialog = builder.create();
                    dialog.show();
                }else{
                    // new user
                    setProgressBarIndeterminate(true);
                   ParseUser newUser = new ParseUser();
                    newUser.setUsername(username);
                    newUser.setPassword(password);
                    newUser.setEmail(email);
                    newUser.signUpInBackground(new SignUpCallback() {
                        @Override
                        public void done(ParseException e) {
                            setProgressBarIndeterminate(false);
                         if (e==null){
                             Intent intent = new Intent(SignUpActivity.this, MainActivity.class);
                             intent.addFlags(Intent.FLAG_ACTIVITY_NEW_TASK);
                             intent.addFlags(Intent.FLAG_ACTIVITY_CLEAR_TASK);
                                     startActivity(intent);
                         }else{
                             AlertDialog.Builder builder = new AlertDialog.Builder(SignUpActivity.this);
                             builder.setMessage(e.getMessage())
                                     .setTitle(R.string.signup_error_title)
                                     .setPositiveButton(android.R.string.ok, null);
                         }
                        }
                    });
                }
            }
     });
}

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
        int id = item.getItemId();

        //noinspection SimplifiableIfStatement
        if (id == R.id.action_send) {
            return true;
        }

        return super.onOptionsItemSelected(item);
    }
}