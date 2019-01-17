/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 7, 2019, 1:48 PM
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
    std::cout.precision(1);
    std::cout.setf(std::ios::fixed);
    //Declare all Variables Here
    double in1, in2, in3, in4, in5, sum, average;
    //Input or initialize values Here
    cout<<"Input 5 numbers."<<endl;
    cin>>in1>>in2>>in3>>in4>>in5;
    //Process/Calculations Here
    sum = in1+in2+in3+in4+in5;
    average = sum/5;
    //Output Located Here
    cout<<"The average is "<<average;
    //Exit
    return 0;
}

