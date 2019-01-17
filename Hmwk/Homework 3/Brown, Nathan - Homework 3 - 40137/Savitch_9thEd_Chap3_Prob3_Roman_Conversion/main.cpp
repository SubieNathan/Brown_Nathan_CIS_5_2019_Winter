/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 14, 2019, 5:14 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int input, n, n1, n10, n100, n1000;
    string answer;
    //Initialize or input i.e. set variable values
    cout<<"Arabic to Roman numeral conversion.\nInput the integer to convert.\n";
    cin>>input;
    n = input;
    //Map inputs -> outputs
    if(n >= 1000 && n <= 3000){//Validate input
        n1000 = (n/1000)%10;
        for(int i = n1000; i>0; i--){
            answer += "M";
        }
        
        n100 = (n/100)%10;
        switch(n100){
            case 1:
            case 2:
            case 3:
                for(int i = n100; i>0; i--){
                    answer += "C";
                }
                break;
            case 4:
                answer += "CD";
                break;
            case 5:
                answer += "D";
                break;
            case 6:
            case 7:
            case 8:
                answer += "D";
                for(int i = n100; i>5; i--){
                    answer += "C";
                }
                break;
            case 9:
                answer += "CM";
                break;
        }
        
        n10 = (n/10)%10;
        switch(n10){
            case 1:
            case 2:
            case 3:
                for(int i = n10; i>0; i--){
                    answer += "X";
                }
                break;
            case 4:
                answer += "XL";
                break;
            case 5:
                answer += "L";
                break;
            case 6:
            case 7:
            case 8:
                answer += "L";
                for (int i = n10; i>5; i--){
                    answer += "X";
                }
                break;
            case 9:
                answer += "XC";
                break;
        }
        
        n1 = n%10;
        switch(n1){
            case 1:
            case 2:
            case 3:
                for(int i = n1; i>0; i--){
                    answer += "I";
                }
                break;
            case 4:
                answer += "IV";
                break;
            case 5:
                answer += "V";
                break;
            case 6:
            case 7:
            case 8:
                answer += "V";
                for(int i = n1; i>5; i--){
                    answer += "I";
                }
                break;
            case 9:
                answer += "IX";
                break;
        }
        
        cout<<input<<" is equal to "<<answer;
    }else{
        cout<<input<<" is Out of Range!";
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}