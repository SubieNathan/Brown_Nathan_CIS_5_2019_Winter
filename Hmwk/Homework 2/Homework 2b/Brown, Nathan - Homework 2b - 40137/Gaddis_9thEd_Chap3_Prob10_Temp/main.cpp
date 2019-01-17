/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 11, 2019, 1:11 PM
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
    float fah, cen;
    //Initialize or input i.e. set variable values
    cout<<"Temperature Converter\nInput Degrees Fahrenheit\n";
    cin>>fah;
    //Map inputs -> outputs
    cen = (fah - 32) * (5.0/9);
    //Display the outputs
    cout<<fah<<" Degrees Fahrenheit = "<<cen<<" Degrees Centigrade";
    //Exit stage right or left!
    return 0;
}