/* 
 * Author: Nathan Brown
 * Created on 1/24/19
 * Purpose: Input Future Value, Number of Years, Interest Rate; Output Present Value
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <math.h>   //Math Library
#include <iomanip>  //Decimal Precision Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
float psntVal(float,float,int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float value,irate,output;
    int years;
    
    //Initialize Variables
    cout<<"This is a Present Value Computation\n";
    cout<<"Input the Future Value in Dollars\n";
        cin>>value;//Initialize future value
        
    cout<<"Input the Number of Years\n";
        cin>>years;//Initialize years
        
    cout<<"Input the Interest Rate %/yr\n";
        cin>>irate;//Initialize interest rate
    irate /= 100;//Format interest rate as percent
    irate += 1;//Prepare interest rate for psntVal function
    
    //Process/Map inputs to outputs
    std::cout << std::setprecision(2);//Format Output to 2 decimals (currency)
    std::cout << std::fixed;
    output = psntVal(value,irate,years);//Set output equal to return of psntVal Function
    
    //Output data
    cout<<"The Present Value = $"<<output;
    
    //Exit stage right!
    return 0;
}

float psntVal(float v, float i, int y){//Present Value function, v = Future Value, i = Interest Rate, y = Years
    float o;//o = Output
    
    o = v/(pow(i,y));//o=v/(i)^n Present Value Calculation
    
    return o;//Return Output
}