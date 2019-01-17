/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 14, 2019, 5:12 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char p1, p2;
    //Initialize or input i.e. set variable values
    cout<<"Rock Paper Scissors Game\nInput Player 1 and Player 2 Choices\n";
    cin>>p1>>p2;
    //Map inputs -> outputs
    if(p1 == 'r' || p1 == 'R'){
        if(p2 == 'r' || p2 == 'R'){
            cout<<"Nobody wins.";
        }else if(p2 == 'p' || p2 == 'P'){
            cout<<"Paper covers rock.";
        }else if(p2 == 's' || p2 == 'S'){
            cout<<"Rock breaks scissors.";
        }
    }else if(p1 == 'p' || p1 == 'P'){   
        if(p2 == 'r' || p2 == 'R'){
            cout<<"Paper covers rock.";
        }else if(p2 == 'p' || p2 == 'P'){
            cout<<"Paper ties with paper.";
        }else if(p2 == 's' || p2 == 'S'){
            cout<<"Scissors cuts paper.";
        }
    }else if(p1 == 's' || p1 == 'S'){
        if(p2 == 'r' || p2 == 'R'){
            cout<<"Rock breaks scissors.";
        }else if(p2 == 'p' || p2 == 'P'){
            cout<<"Scissors cuts paper.";
        }else if(p2 == 's' || p2 == 'S'){
            cout<<"Scissors tie with scissors.";
        }
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}