/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 7, 2019, 1:38 PM
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
    int distance, acceleration(32), time;
    //Input or initialize values Here
    cout<<"Input the time in free-fall"<<endl<<endl;
    cin>>time;
    //Process/Calculations Here
    distance = 0.5 * (acceleration * (time * time));
    //Output Located Here
    cout<<"The distance = "<<distance<<" feet";
    //Exit
    return 0;
}

