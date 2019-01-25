/* 
 * Author: Nathan Brown
 * Created on 1/24/19
 * Purpose: Input an integer greater than 0, output the steps needed for a
            collatz sequence takes to end (starting at input)
 */

//System Libraries
#include <cstdlib> //General Utilities Library
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
    int input;//input holds the input
    
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    
    //Initialize Variables
    cin>>input;
    
    //Process and output
    cout<<"Sequence start of "<<input<<" cycles to 1 in "<<
            collatz(input)<<" steps";//Calls the collatz function and outputs data
    
    //Exit stage right!
    return 0;
}

int collatz(int n){//Function to run collatz sequence, n holds the current sequence number
    int count(1);//Count holds the number of steps
    do{
        if(n % 2 == 0){//If even, divide by 2
            n /= 2;
        }else{//If odd, multiply by 3 and add 1
            n *= 3;
            n++;
        }
            count++;//Add 1 step to count variable
    }while(n != 1);//Stop when n reaches 1
    return count;//Return int count
}