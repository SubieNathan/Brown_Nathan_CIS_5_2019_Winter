/* 
 * Author: Nathan Brown
 * Created on 1/24/19
 * Purpose: Input an integer greater than zero, output whether that input is a prime number or not
 */

//System Libraries
#include <cstdlib> //General Utilities Library
#include <iostream> //Input Output Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
bool isPrime(int);//Determine if the input number is prime.

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare Variables
    int input;//holds the input
    bool output;//holds the output
    
    cout<<"Input a number to test if Prime.\n";
    //Initialize Variables
    cin>>input;
    
    //Process
    output = isPrime(input);//set output to return of function isPrime
    
    //Output data
    if(output){
        cout<<input<<" is prime.";
    }else{
        cout<<input<<" is not prime.";
    }
    
    //Exit stage right!
    return 0;
}

bool isPrime(int x){//Checks if int x is a prime number
    int i=1;
    do{
        i++;
        if((x % i) == 0){//If there is a factor, return false, end function
            return false;
            i=x;
        }else{//Otherwise, continue
            continue;
        }
    }while(i <= x/2);//Stop when you have checked up to half of the input
    return true;//If here, number is prime- return true
}