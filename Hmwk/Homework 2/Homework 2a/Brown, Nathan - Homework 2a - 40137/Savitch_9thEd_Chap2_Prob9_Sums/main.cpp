/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 10, 2019, 10:40 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int x(0), posAns(0), negAns(0), Ans(0);
    //Initialize or input i.e. set variable values
    cout<<"Input 10 numbers, any order, positive or negative\n";
    
    for(int i=1; i<=10; i++){
        cin>>x;
        if(x < 0){
            negAns = negAns + x;
        }else if(x > 0){
            posAns = posAns + x;
        }
        Ans = Ans + x;
    }
    //Map inputs -> outputs
    
    //Display the outputs
    cout<<"Negative sum = "<<negAns<<endl;
    cout<<"Positive sum =  "<<posAns<<endl;
    if(posAns >= 10){
        cout<<"Total sum    =   "<<Ans;
    }else{
        cout<<"Total sum    =   "<<Ans;
    }
    //Exit stage right or left!
    return 0;
}