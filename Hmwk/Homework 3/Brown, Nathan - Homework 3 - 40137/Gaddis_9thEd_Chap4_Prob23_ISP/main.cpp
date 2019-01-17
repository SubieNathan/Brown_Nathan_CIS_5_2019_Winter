/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 14, 2019, 5:19 PM
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
    char package;
    bool valid = true;
    float hours, bill;
    //Initialize or input i.e. set variable values
    cout<<"ISP Bill\nInput Package and Hours\n";
    cin>>package>>hours;
    //Map inputs -> outputs
    if(hours > 744){
        valid = false;
        cout<<"Please enter a number of hours less than or equal to 744.";
    }
    if(package == 'A' || package == 'a'){
        bill = 9.95;
        hours -= 10;
        if(hours > 0){
            bill += (hours * 2);
        }
    }else if(package == 'B' || package == 'b'){
        bill = 14.95;
        hours -= 20;
        if(hours > 0){
            bill += (hours * 1);
        }
    }else if(package == 'C' || package == 'c'){
        bill = 19.95;
    }else{
        cout<<"Please select a package.";
        valid = false;
    }
    //Display the outputs
    if(valid){
        cout<<"Bill = $ "<<bill;
    }
    //Exit stage right or left!
    return 0;
}