/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 10, 2019, 10:39 PM
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
    int cap, cur, diff;
    //Initialize or input i.e. set variable values
    cout<<"Input the maximum room capacity and the number of people\n";
    cin>>cap>>cur;
    //Map inputs -> outputs
    diff = cap-cur;
    //Display the outputs
    if(diff >= 0){
        cout<<"Meeting can be held.\n"<<"Increase number of people by "<<diff<<" will be allowed without violation.";
    }else{
        diff = -diff;
        cout<<"Meeting cannot be held.\n"<<"Reduce number of people by "<<diff<<" to avoid fire violation.";
    }
    //Exit stage right or left!
    return 0;
}