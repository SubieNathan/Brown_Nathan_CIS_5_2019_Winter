/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 10, 2019, 7:42 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float mDeath = 5, mWeight = 35, mRatio = mDeath/mWeight;
const float sMass = 350, sCont = 0.001, sSweet = sMass * sCont; //sweetener per can of soda
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int maxS, cans;
    float weight;
    //Initialize or input i.e. set variable values
    cout<<"Program to calculate the limit of Soda Pop Consumption.\nInput the desired dieters weight in lbs.\n";
    cin>>weight;
    weight = weight * 453.592; //conversion to grams
    //Map inputs -> outputs
    maxS = weight * mRatio;
    cans = maxS / sSweet;
    //Display the outputs
    cout<<"The maximum number of soda pop cans\nwhich can be consumed is "<<cans<<" cans";
    //Exit stage right or left!
    return 0;
}
