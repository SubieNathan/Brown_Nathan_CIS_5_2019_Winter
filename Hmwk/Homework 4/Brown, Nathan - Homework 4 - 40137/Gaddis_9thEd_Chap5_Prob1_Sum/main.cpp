/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 17, 2019, 2:35 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int input=0, output=0;
    //Initialize or input i.e. set variable values
    if(! cin){
        cout<<"Sum = 0";
    }
    cin>>input;
    //Map inputs -> outputs
    if(input >= 0){
        for(int i=1; i<=input; i++){
            output += i;
        }
    }
    //Display the outputs
    cout<<"Sum = "<<output;
    //Exit stage right or left!
    return 0;
}