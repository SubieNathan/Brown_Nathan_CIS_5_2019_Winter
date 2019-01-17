/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 17, 2019, 2:38 PM
 */

#include <cstdlib>
//System Libraries
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
    int inputNum;
    char inputChar;
    //Initialize or input i.e. set variable values
    if(cin){
        cin>>inputNum>>inputChar;
        if(inputNum > 0 && inputNum <= 15){
            for(int i = 1; i <= inputNum; i++){
                for(int x = 1; x <= inputNum; x++){
                    cout<<inputChar;
                }
                if(i != inputNum){
                    cout<<endl;
                }
            }
        }
    }
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}