/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 17, 2019, 2:37 PM
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
    int input=0, min=0, max=0;
    bool first = true;
    //Initialize or input i.e. set variable values
    while(input != -99){
        cin>>input;
        if(first){
            min = input;
            max = input;
            first = false;
            continue;
        }
        if(input != -99){
            if(input < min){
                min = input;
            }else if(input > max){
                max = input;
            }
        }
    }
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Smallest number in the series is "<<min;
    cout<<"\nLargest  number in the series is "<<max;
    //Exit stage right or left!
    return 0;
}