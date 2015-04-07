package com.example.farber.funfacts;
import java.util.Random;
/**
 * Created by farber on 11/5/2014.
 */
public class FactBook {

    public String[] mFacts = {
                "Ants stretch when they wake up in the morning",
                "Ostriches can run faster than horses",
                "Olympic gold medals are actually made mostly of silver",
                "You are born with 300 bones; by the time you are an adult you will have 206" ,
                "It takes about 8 minutes for light from the Sun to reach Earth",
                "Some bamboo plants can grow almost a meter in just one day",
                "The state of Florida is bigger than England"};

    public String getFact(){
        String fact;
        fact = "";
        //Randomly select a fact
        Random randomGenerator = new Random();
        int randomNumber = randomGenerator.nextInt(mFacts.length);
        fact = mFacts[randomNumber];


    return fact;

    }


}
