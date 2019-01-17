/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 14, 2019, 5:13 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string sign1 = "", sign2 = "", answer = "";
    //Initialize or input i.e. set variable values
    cout<<"Horoscope Program which examines compatible signs.\nInput 2 signs.\n";
    cin>>sign1>>sign2;
    //Map inputs -> outputs
    if(sign1 == "Aries" || sign1 == "Leo" || sign1 == "Sagittarius"){
        if(sign2 == "Aries" || sign2 == "Leo" || sign2 == "Sagittarius"){
            answer = "compatible Fire";
        }else{
            answer = "not compatible";
        }
    }else if(sign1 == "Taurus" || sign1 == "Virgo" || sign1 == "Capricorn"){
        if(sign2 == "Taurus" || sign2 == "Virgo" || sign2 == "Capricorn"){
            answer = "compatible Earth";
        }else{
            answer = "not compatible";
        }
    }else if(sign1 == "Gemini" || sign1 == "Libra" || sign1 == "Aquarius"){
        if(sign2 == "Gemini" || sign1 == "Libra" || sign1 == "Aquarius"){
            answer = "compatible Air";
        }else{
            answer = "not compatible";
        }
    }else if(sign1 == "Cancer" || sign1 == "Scorpio" || sign1 == "Pisces"){
        if(sign2 == "Cancer" || sign1 == "Scorpio" || sign1 == "Pisces"){
            answer = "compatible Water";
        }else{
            answer = "not compatible";
        }
    }
    //Display the outputs
    cout<<sign1<<" and "<<sign2<<" are "<<answer<<" signs.";
    //Exit stage right or left!
    return 0;
}