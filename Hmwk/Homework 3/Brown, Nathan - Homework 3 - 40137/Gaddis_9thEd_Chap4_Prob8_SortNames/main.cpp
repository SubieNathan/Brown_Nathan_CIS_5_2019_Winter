/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 14, 2019, 5:15 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string in1, in2, in3, out1, out2, out3;
    //Initialize or input i.e. set variable values
    cout<<"Sorting Names\nInput 3 names\n";
    cin>>in1>>in2>>in3;
    //Map inputs -> outputs
    if(in1 < in2){
        //in1 < in2
        if (in3 < in1){
            //in3 < in1 < in2
            out1 = in3;
            out2 = in1;
            out3 = in2;
        }else if(in3 > in2){
            //in1 < in2 < in3
            out1 = in1;
            out2 = in2;
            out3 = in3;
        }else{
            //in1 < in3 < in2
            out1 = in1;
            out2 = in3;
            out3 = in2;
        }
    }else{
        //in2 < in1
        if (in3 < in2){
            //in3 < in2 < in1
            out1 = in3;
            out2 = in2;
            out3 = in1;
        }else if(in3 > in1){
            //in2 < in1 < in3
            out1 = in2;
            out2 = in1;
            out3 = in3;
        }else{
            //in2 < in3 < in1
            out1 = in2;
            out2 = in3;
            out3 = in1;
        }
    } 
    //Display the outputs
    cout<<out1<<endl<<out2<<endl<<out3;
    //Exit stage right or left!
    return 0;
}