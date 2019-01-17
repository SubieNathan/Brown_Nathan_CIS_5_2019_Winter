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
    float worth, insur;
    //Initialize or input i.e. set variable values
    cout<<"Insurance Calculator\nHow much is your house worth?\n";
    cin>>worth;
    //Map inputs -> outputs
    insur = worth * 0.8;
    //Display the outputs
    cout<<"You need $"<<insur<<" of insurance.";
    //Exit stage right or left!
    return 0;
}