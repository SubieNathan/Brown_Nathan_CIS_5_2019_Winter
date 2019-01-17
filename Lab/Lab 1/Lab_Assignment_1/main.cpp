/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Nathan
 *
 * Created on January 7, 2019, 2:08 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;


int main(int argc, char** argv) {

    float milBdgt,fedBdgt,mlPrcnt;

    milBdgt=7.0e11f;    //Military Budget = 700 Billion
    fedBdgt=4.1e12f;    //Federal Budget  = 4.1 Trillion
    
    mlPrcnt = milBdgt / fedBdgt;
    mlPrcnt = mlPrcnt * 100;
    cout<<"The Military Budget is "<<mlPrcnt<<"% of the Federal Budget.";
    
    return 0;
}

