/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 11, 2019, 1:10 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int cookies, calories;
    //Initialize or input i.e. set variable values
    cout<<"Calorie Counter\nHow many cookies did you eat?\n";
    cin>>cookies;
    //Map inputs -> outputs
    calories = cookies * (300 / 4);
    //Display the outputs
    cout<<"You consumed "<<calories<<" calories.";
    //Exit stage right or left!
    return 0;
}