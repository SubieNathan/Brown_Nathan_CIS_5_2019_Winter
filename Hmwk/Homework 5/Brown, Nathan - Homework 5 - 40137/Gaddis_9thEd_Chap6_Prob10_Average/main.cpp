/* 
 * Title: Average Scores (Drop 1)
 * Author: Nathan Brown
 * Created on 1/24/19
 * Purpose: Input Future Value, Number of Years, Interest Rate; Output Present Value
 */

//Libraries
#include <iostream>//Input/Output Library
#include <iomanip>//Decimal Format Library
using namespace std;

//Function Prototypes
void getScre(int &,int &,int &,int &,int &);//Get Score Function, handles input of 5 ints
float calcAvg(int,int,int,int,int);//Calculate Average Function, handles average calculations
int fndLwst(int,int,int,int,int);//Find Lowest Function, finds the minimum from input

//Execution begins...
int main(int argc, char** argv){
    //Declare Variables
    int a(0),b(0),c(0),d(0),e(0);//a,b,c,d,e hold the 5 inputs
    float avg(0);//avg holds the average, which will be the output
    
    cout<<"Find the Average of Test Scores\n";
    cout<<"by removing the lowest value.\n";
    cout<<"Input the 5 test scores.\n";
    
    getScre(a,b,c,d,e);//Initialize inputs
    
    avg = calcAvg(a,b,c,d,e);//Set avg and call calcAvg function to find the average
    
    std::cout << std::setprecision(1);//Set the decimal precision of the output to 1
    std::cout << std::fixed;
    
    cout<<"The average test score = "<<avg;//Output data
    
    return 0;
}

void getScre(int &aa,int &bb,int &cc,int &dd,int &ee){
    cin>>aa>>bb>>cc>>dd>>ee;//Initialize inputs
}

float calcAvg(int aa,int bb,int cc,int dd,int ee){
    int scores [5] = {aa,bb,cc,dd,ee};//Array to hold scores
    int min = fndLwst(aa,bb,cc,dd,ee);//Min will hold minimum, calls fndLwst to determine the value
    float total(0),avg(0);//Total holds the sum, Avg holds the average which will be returned
    
    for(int i=0;i<5;i++){//Loop to add each value
        if(scores[i] != min){//If value is NOT the min
            total += scores[i];//Add value to total
        }
    }
    avg = total / 4;//Average calculation
    return avg;//Return the average
}

int fndLwst(int aa,int bb,int cc,int dd,int ee){
    int scores [4] = {bb,cc,dd,ee};//Array to hold 4 scores
    int min(aa);//Min will hold minimum, set to aa as starting score
    
    for(int i=0;i<4;i++){//Loop to check each value
        if(scores[i]<min){//If value is less than min
            min = scores[i];//Set as new min
        }
    }
    
    return min;//Return the minimum found
}