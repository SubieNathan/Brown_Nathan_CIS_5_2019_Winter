/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 11, 2019, 1:12 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <math.h>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    std::cout << std::setprecision(4);
    std::cout << std::fixed;
    //Declare Variables
    double angle, degr, sinx, cosx, tanx;
    //Initialize or input i.e. set variable values
    cout<<"Calculate trig functions\nInput the angle in degrees.\n";
    cin>>angle;
    degr = angle;
    angle = angle * M_PI / 180; //convert to radians
    //Map inputs -> outputs
    sinx = sin(angle);
    cosx = cos(angle);
    tanx = tan(angle);
    //Display the outputs
    cout<<"sin("<<setprecision(0)<<degr<<setprecision(4)<<") = "<<sinx
    <<"\ncos("<<setprecision(0)<<degr<<setprecision(4)<<") = "<<cosx
    <<"\ntan("<<setprecision(0)<<degr<<setprecision(4)<<") = "<<tanx;
    //Exit stage right or left!
    return 0;
}