/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 17, 2019, 2:36 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>  //Input/Output Library
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
    int input=0;
    double x=0.01,salary=0;
    //Initialize or input i.e. set variable values
    if(cin){
        cin>>input;
    }
    //Map inputs -> outputs
    
    for(int i=1;i<=input;i++){
        salary += x;
        x = x*2;
    }
    //Display the outputs
    cout<<"Pay = $"<<salary;
    //Exit stage right or left!
    return 0;
}