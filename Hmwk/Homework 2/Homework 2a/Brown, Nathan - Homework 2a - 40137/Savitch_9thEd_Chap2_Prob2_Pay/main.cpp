/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 10, 2019, 10:37 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const double pRaise = 0.076;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    std::cout << std::setprecision(2);
    std::cout << std::fixed;
    //Declare Variables
    double salary, retro, newAnnual, newMonthly;
    //Initialize or input i.e. set variable values
    cout<<"Input previous annual salary.\n";
    cin>>salary;
    //Map inputs -> outputs
    retro = (salary / 2) * pRaise;
    newAnnual = salary * (1 + pRaise);
    newMonthly = newAnnual / 12;
    //Display the outputs
    cout<<"Retroactive pay    = $  "<<retro<<endl;
    cout<<"New annual salary  = $"<<newAnnual<<endl;
    if(newMonthly > 100){
        cout<<"New monthly salary = $ "<<newMonthly;
    }else{
        cout<<"New monthly salary = $  "<<newMonthly;
    }
    //Exit stage right or left!
    return 0;
}
