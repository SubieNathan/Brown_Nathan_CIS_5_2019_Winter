/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 11, 2019, 1:09 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    std::cout << std::setprecision(1);
    std::cout << std::fixed;
    //Declare Variables
    int x;
    float total, avg;
    //Initialize or input i.e. set variable values
    cout<<"Input 5 numbers to average.\n";
    for(int i=1; i<=5; i++){
        cin>>x;
        total = total + x;
    }
    //Map inputs -> outputs
    avg = total / 5;
    //Display the outputs
    cout<<"The average = "<<avg;
    //Exit stage right or left!
    return 0;
}