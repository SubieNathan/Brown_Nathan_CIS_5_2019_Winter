/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 7, 2019, 1:34 PM
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
    int quarters, dimes, nickels, answer;
    //Input or initialize values Here
    cout<<"Enter the number of Quarters, Dimes and Nickels"<<endl<<endl;
    cin>>quarters>>dimes>>nickels;
    //Process/Calculations Here
    answer = (25 * quarters) + (10 * dimes) + (5 * nickels);
    //Output Located Here
    cout<<quarters<<" Quarters + "<<dimes<<" Dimes + "<<nickels<<" Nickels = "<<answer<<" cents!";
    //Exit
    return 0;
}

