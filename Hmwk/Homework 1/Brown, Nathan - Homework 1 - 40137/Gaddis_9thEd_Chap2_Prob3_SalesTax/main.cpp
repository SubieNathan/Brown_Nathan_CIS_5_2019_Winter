/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 7, 2019, 1:43 PM
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
    int purchase;
    double stateTax(0.04), countryTax(0.02), answer;
    //Input or initialize values Here
    cout<<"Input price of purchase"<<endl;
    cin>>purchase;
    //Process/Calculations Here
    answer = (purchase * stateTax) + (purchase * countryTax);
    //Output Located Here
    cout<<"The total sales tax is "<<answer;
    //Exit
    return 0;
}

