/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 7, 2019, 1:24 PM
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
    int x, y, answer;
    //Input or initialize values Here
    cout << "Input 2 integer numbers" << endl;
    cin >> x >> y;
    //Process/Calculations Here
    answer = x + y;
    //Output Located Here
    cout << "The sum of " << x << "+" << y << "=" << answer;
    //Exit
    return 0;
}

