/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 7, 2019, 1:50 PM
 */

//System Libraries Here
#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Constants like PI, e, Gravity, Conversions, 2D array size only!

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number Seed Here
    
    //Declare all Variables Here
    float gallons, distance, mpg;
    //Input or initialize values Here
    cout<<"Input number of gallons and distance traveled."<<endl;
    cin>>gallons>>distance;
    //Process/Calculations Here
    mpg = distance / gallons;
    //Output Located Here
    cout<<"Your MPG is "<<mpg;
    //Exit
    return 0;
}
