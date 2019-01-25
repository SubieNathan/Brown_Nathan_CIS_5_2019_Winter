/* 
 * Author: Nathan Brown
 * Created on 1/24/2019
 * Purpose: Input an integer greater than zero, output the factorial of the input
 */

//System Libraries
#include <cstdlib>  //General Utilities Library
#include <iostream> //Input/Output Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int fctrl(int);//Function to write for this problem

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int input, print; //Input holds the user input, print holds output to be printed
    
    cout<<"This program calculates the factorial using a function prototype found in the template for this problem.\nInput the number for the function.\n";
    
    //Initialize Variables
    cin>>input;
    
    //Process and Output
    if(input > 1){//Validate Input
        print = fctrl(input);//Call function to find factorial
        cout<<input<<"! = "<<print;//Output data
    }else if(input > 0){//Catch special case (1)
        cout<<"1! = 1";//Output data
    }else{//Catch negative and zero values
        cout<<"[ERROR] Please enter an integer greater than zero!";//Output error
    }
    //Exit stage right!
    return 0;
}

//
int fctrl(int input){//Function to find the factorial of int input
    //Declare Variables
    int output=1;//Output holds the output value (total)
    for(int i=1;i<=input;i++){//Loop through factorial values
        output = output * i;//Calculate factorial
    }
    return output;//Return the factorial
}