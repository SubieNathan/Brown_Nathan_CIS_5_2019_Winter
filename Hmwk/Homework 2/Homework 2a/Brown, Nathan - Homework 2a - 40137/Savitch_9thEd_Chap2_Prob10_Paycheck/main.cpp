/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 10, 2019, 10:42 PM
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
    std::cout << std::setprecision(2);
    std::cout << std::fixed;
    //Declare Variables
    int pay, hours;
    double paycheck;
    //Initialize or input i.e. set variable values
    cout<<"This program calculates the gross paycheck.\nInput the pay rate in $'s/hr and the number of hours.\n";
    cin>>pay>>hours;
    //Map inputs -> outputs
    if(hours > 40){
        paycheck = (pay * 40) + (2 * (pay * (hours - 40)));
    }else{
        paycheck = pay * hours;
    }
    //Display the outputs
    if(paycheck >= 1000){
        cout<<"Paycheck = $"<<paycheck;
    } else {
        cout<<"Paycheck = $ "<<paycheck;
    }
    //Exit stage right or left!
    return 0;
}