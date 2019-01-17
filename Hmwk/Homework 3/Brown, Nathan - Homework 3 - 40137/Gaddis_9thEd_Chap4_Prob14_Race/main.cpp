/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 14, 2019, 5:18 PM
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
    int valid = 1;
    int timeIn[3];
    int timeOut[3];
    string nameIn[3];
    string nameOut[3];
    //Initialize or input i.e. set variable values
    cout<<"Race Ranking Program\nInput 3 Runners\nTheir names, then their times";
    for(int i=0; i<3; i++){
        cin>>nameIn[i]>>timeIn[i];
        if(timeIn[i] < 0){
            valid = 0;
        }
    }
    //Map inputs -> outputs
    if(valid == 1){
        if(timeIn[0]<timeIn[1]){
            //0<1
            if(timeIn[2]<timeIn[0]){
                //2<0<1
                timeOut[0] = timeIn[2];
                timeOut[1] = timeIn[0];
                timeOut[2] = timeIn[1];
                nameOut[0] = nameIn[2];
                nameOut[1] = nameIn[0];
                nameOut[2] = nameIn[1];
            }else if(timeIn[2]>timeIn[1]){
                //0<1<2
                timeOut[0] = timeIn[0];
                timeOut[1] = timeIn[1];
                timeOut[2] = timeIn[2];
                nameOut[0] = nameIn[0];
                nameOut[1] = nameIn[1];
                nameOut[2] = nameIn[2];
            }else{
                //0<2<1
                timeOut[0] = timeIn[0];
                timeOut[1] = timeIn[2];
                timeOut[2] = timeIn[1];
                nameOut[0] = nameIn[0];
                nameOut[1] = nameIn[2];
                nameOut[2] = nameIn[1];
            }
        }else{
            //1<0
            if(timeIn[2]<timeIn[1]){
                //2<1<0
                timeOut[0] = timeIn[2];
                timeOut[1] = timeIn[1];
                timeOut[2] = timeIn[0];
                nameOut[0] = nameIn[2];
                nameOut[1] = nameIn[1];
                nameOut[2] = nameIn[0];
            }else if(timeIn[2]>timeIn[0]){
                //1<0<2
                timeOut[0] = timeIn[1];
                timeOut[1] = timeIn[0];
                timeOut[2] = timeIn[2];
                nameOut[0] = nameIn[1];
                nameOut[1] = nameIn[0];
                nameOut[2] = nameIn[2];
            }else{
                //1<2<0
                timeOut[0] = timeIn[1];
                timeOut[1] = timeIn[2];
                timeOut[2] = timeIn[0];
                nameOut[0] = nameIn[1];
                nameOut[1] = nameIn[2];
                nameOut[2] = nameIn[0];
            }
        }
    }
    //Display the outputs
    for(int i=0; i<3; i++){
        if(timeOut[i] >= 100){
            cout<<endl<<nameOut[i]<<"\t"<<timeOut[i];
        }else{
            cout<<endl<<nameOut[i]<<"\t "<<timeOut[i];
        }
    }
    //Exit stage right or left!
    return 0;
}