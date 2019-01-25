/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 19, 2019, 1:29 AM
 */

#include <cstdlib>//General Utilities
#include <iostream>//Input/Output
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include <string>
#include <bits/stdc++.h> 
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Variable declaration
    float x,input;//x holds guess, input holds user input
    string s[33] = {"I"," ","guessed"," ","your"," ","number","!"," ","Was"," ","it",".",".","."};
    int i, delay;
    
    x = 50;//first guess always in middle
    i = 25;//guess increment (halves each time)
    
    cout<<"    <- Input your secret number (1-100)\n"<<"\x1b[A";
    cin>>input;
    cout<<"\x1b[A";
    do{
        if(input<=100&&input>0){
            if(x>input){
                cout<<"I guessed "<<x<<". I was too high!\n";
                x-=i;
                i = i/2;

            }else if(x<input){
                cout<<"I guessed "<<x<<". I was too low!\n";
                x+=i;
                i = i/2;

            }
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        }
    }while(x!=input);
    
    cout<<"I guessed your number, was it...";
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    
    delay = (1/input) * 2000;
    
    for(int n=1;n<=input;n++){
        std::this_thread::sleep_for(std::chrono::milliseconds(delay));
       cout<<"\n"<<n;
    }
    cout<<"?";
    return 0;
}

