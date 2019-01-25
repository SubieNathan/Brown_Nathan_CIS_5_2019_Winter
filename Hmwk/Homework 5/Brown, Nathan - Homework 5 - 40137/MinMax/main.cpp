/* 
 * Author: Nathan Brown
 * Created on 1/24/19
 * Purpose: Input 3 integers, output the min and max
 */

//System Libraries
#include <cstdlib> //General Utilities Library
#include <iostream> //Input/Output Library
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
void minmax(int,int,int,int&,int&);//Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int a, b, c, min(0), max(0);
    
    //Initialize Variables
    cout<<"Input 3 numbers\n";
    cin>>a>>b>>c;
    
    //Process/Map inputs to outputs
    minmax(a,b,c,min,max);
    
    //Output data
    cout<<"Min = "<<min<<endl;
    cout<<"Max = "<<max;
    
    //Exit stage right!
    return 0;
}

void minmax(int x, int y, int z, int& min, int& max){//Function to find the min and max
        max = x;//Set min and max in case first input is min or max
        min = x;
        if(y>max){//Check input y max/min, if so set new
            max = y;
        }else if(y<min){
            min = y;
        }
        
        if(z>max){//Check input z max/min, if so set new
            max = z;
        }else if(z<min){
            min = z;
        }
        
        return;//Void function returns null
}