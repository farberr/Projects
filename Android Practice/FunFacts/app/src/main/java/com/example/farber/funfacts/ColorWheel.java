package com.example.farber.funfacts;

import android.graphics.Color;

import java.util.Random;

/**
 * Created by farber on 11/5/2014.
 */
public class ColorWheel {


        public String[] mColors = {

                "#39add1",
                "#3079ab",
                "#c25975",
                "#e15258",
                "#f9845b"


        };

        public int getColor() {
            String color;
            color = "";
            //Randomly select a fact
            Random randomGenerator = new Random();
            int randomNumber = randomGenerator.nextInt(mColors.length);
            color = mColors[randomNumber];
            int colorAsInt = Color.parseColor(color);

            return colorAsInt;

        }
    }
