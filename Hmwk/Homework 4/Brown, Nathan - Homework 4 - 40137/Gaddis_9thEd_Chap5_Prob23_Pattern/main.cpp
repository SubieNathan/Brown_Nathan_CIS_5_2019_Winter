/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 17, 2019, 2:40 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void print(int length){
    for(int i = 0;i < length; i++){
        cout<<"+";
    }
}
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int x = 1, input = 0;
    //Initialize or input i.e. set variable values
    if(cin){
        cin>>input;
        if(input > 0 && input <= 10){
            while(x < input){
                print(x);
                cout<<endl<<endl;
                x += 1;
            }
            
            print(x);
            cout<<endl<<endl;
            
            while(x > 0){
                print(x);
                if(x > 1){
                    cout<<endl<<endl;
                }
                x -= 1;
            }
        }
    }
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}