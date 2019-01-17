/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 14, 2019, 5:17 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    std::cout << std::setprecision(2);
    std::cout << std::fixed;
    //Declare Variables
    float balance, checks, checkFee, monthlyFee, lowBal, newBal;
    //Initialize or input i.e. set variable values
    cout<<"Monthly Bank Fees\nInput Current Bank Balance and Number of Checks\n";
    cin>>balance>>checks;
    //Map inputs -> outputs
    if (balance >= 0){
        if(checks >= 0){
            if(checks < 20){
                checkFee = checks * 0.10;
            }else if(checks >= 20 && checks < 40){
                checkFee = checks * 0.08;
            }else if(checks >=40 && checks < 60){
                checkFee = checks * 0.06;
            }else{
                checkFee = checks * 0.04;
            }
        }
        monthlyFee = 10;
        if(balance < 400){
            lowBal = 15.00;
        }
        newBal = balance - checkFee - monthlyFee - lowBal;
        
        cout<<"Balance     $   "<<balance<<endl;
        cout<<"Check Fee   $     "<<checkFee<<endl;
        cout<<"Monthly Fee $    "<<monthlyFee<<endl;
        if(lowBal < 15){
            cout<<"Low Balance $     "<<lowBal<<endl;
        }else{
            cout<<"Low Balance $    "<<lowBal<<endl;
        }
        if(newBal >= 100){
        cout<<"New Balance $   "<<newBal;
        }else{
        cout<<"New Balance $    "<<newBal;
        }
    }else{
        cout<<"Your account has been overdrawn!";
    }
    //Display the outputs
    //Exit stage right or left!
    return 0;
}