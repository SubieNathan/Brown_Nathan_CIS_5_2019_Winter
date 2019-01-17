/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 7, 2019, 1:30 PM
 */

//System Libraries Here
#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Constants like PI, e, Gravity, Conversions, 2D array size only!

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number Seed Here
    
    //Declare all Variables Here
    char inputChar;
    //Input or initialize values Here
    cout<<"Input the character to make the Big C!"<<endl<<endl;
    cin>>inputChar;
    //Process/Calculations Here
    
    //Output Located Here
    for(int i=1;i<=9;i++){
        if(i == 1 || i == 9){
        //Rows 1 and 9
            cout<<"    "<<inputChar<<" "<<inputChar<<" "<<inputChar<<endl;
            continue;   
        }
        if(i == 2 || i == 8){
        //Rows 2 and 8
            cout<<"   "<<inputChar<<"     "<<inputChar<<endl;
            continue;
        }
        //Rows 3-7
        cout<<"  "<<inputChar<<endl;
    }
    //Exit
    return 0;
}

