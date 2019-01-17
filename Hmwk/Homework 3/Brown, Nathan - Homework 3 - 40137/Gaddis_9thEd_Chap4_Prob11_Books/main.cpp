/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 14, 2019, 5:16 PM
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
    int input, points;
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points\nInput the number of books purchased this month.\n";
    cin>>input;
    //Map inputs -> outputs
    if(input >= 0){
        if(input == 0){
            points = 0;
        }else if(input == 1){
            points = 5;
        }else if(input == 2){
            points = 15;
        }else if(input == 3){
            points = 30;
        }else{
            points = 60;
        }
    }
    //Display the outputs
    cout<<"Books purchased =  "<<input<<endl;
    cout<<"Points earned   = "<<points;
    //Exit stage right or left!
    return 0;
}