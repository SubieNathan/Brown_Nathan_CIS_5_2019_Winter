/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 14, 2019, 5:26 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float exciseTax = 0.39;
const float tradeTax = 0.10;
const float fedTax = 0.184;
const float salesTax = 0.08;
const float oilProfit = 0.065;
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    std::cout << std::setprecision(3);
    std::cout << std::fixed;
    //Declare Variables
    float gasPrice, taxP, taxA, profitP, profitA;
    //Initialize or input i.e. set variable values
    cout<<"Input the cost of gasoline per gallon.\n";
    cin>>gasPrice;
    //Map inputs -> outputs
    if(gasPrice > 0){
        taxA = exciseTax + tradeTax + fedTax;
        taxA += (salesTax * gasPrice);
        taxP = 100 * (taxA / gasPrice);
        
        profitA = oilProfit * gasPrice;
        profitP = 100 * (profitA / gasPrice);
    }else{
        cout<<"Please enter a valid gas price.";
    }
    //Display the outputs
    cout<<"Government Tax percentage: "<<taxP<<"%";
    cout<<"\nGovernment Tax amount: $"<<taxA;
    cout<<"\nOil Company Profit percentage: "<<profitP<<"%";
    cout<<"\nOil Company Profit amount: $"<<profitA;
    //Exit stage right or left!
    return 0;
}