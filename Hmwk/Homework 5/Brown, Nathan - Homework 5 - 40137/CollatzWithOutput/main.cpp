/* 
 * Author: Nathan Brown
 * Created on 1/24/19
 * Purpose: Input integer, output collatz sequence starting at
            input(output steps and sequence)
 */

//System Libraries
#include <cstdlib> //General Utility Library
#include <iostream> //Input/Output Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int collatz(int);//Function to run collatz sequence

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int input,ns;//input holds user input, ns holds the number of steps
    
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    
    //Initialize Variables
    cin>>input;
    
    //Process/Map inputs to outputs
    cout<<input;
    ns=collatz(input);//set number of steps equal to return of collatz function
    
    //Output data
    cout<<"Sequence start of "<<input<<" cycles to 1 in "<<
            ns<<" steps";
    
    //Exit stage right!
    return 0;
}

int collatz(int input){//Function to run Collatz sequence, input holds current place in sequence
    int count(1);//Count holds number of steps to complete Collatz sequence
    do{
        if(input % 2 == 0){//If input even, divide by 2
            input /= 2;
        }else{//If input odd, multiply by 3 and add 1
            input *= 3;
            input++;
        }
            count++;//Add 1 step to Count
            cout<<", "<<input;//Output each number in the sequence
    }while(input != 1);//End when sequence reaches 1
    cout<<endl;//Output new line for output of steps
    return count;//Return number of steps to ns variable
}