/* 
 * Title: Homework 5 Menu
 * Author: Nathan Brown
 * Created on 1/24/19
 * Purpose: Display Homework 5 on a menu
 */
 
//System Libraries
#include <iostream>//Input/Output Library
#include <cstdlib> //Random Library
#include <iomanip> //Format Library
#include <math.h>   //Math Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
int fctrl(int);//Factorial
bool isPrime(int);//Determine if the input number is prime.
void minmax(int,int,int,int&,int&);//Function to find the min and max
int collatz(int);//Function to run collatz sequence
int collatzp(int);//Function to run and print collatz sequence
float psntVal(float,float,int);//Present Value Function
void getScre(int &,int &,int &,int &,int &);//Get Score Function, handles input of 5 ints
float calcAvg(int,int,int,int,int);//Calculate Average Function, handles average calculations
int fndLwst(int,int,int,int,int);//Find Lowest Function, finds the minimum from input
void input(int &,int &);//Input function handles inputs
void convrt(int &,int &);//Convert function converts time and calls output function
void output(int &,int &,int &,char &);//Output function handles output and formatting

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char wchProb;//Choose which problem
    char exit;//Exits on N

    do{
        //Initialize or input i.e. set variable values
        cout<<"Menu Program"<<endl;
        cout<<"Type 1 for Factorial"<<endl;
        cout<<"Type 2 for isPrime"<<endl;
        cout<<"Type 3 for MinMax"<<endl;
        cout<<"Type 4 for Collatz Sequence"<<endl;
        cout<<"Type 5 for Collatz Sequence with Output of Sequence"<<endl;
        cout<<"Type 6 for Gaddis 9thEd Chap6 Prob9 Present Value"<<endl;
        cout<<"Type 7 for Gaddis 9thEd Chap6 Prob10 Average"<<endl;
        cout<<"Type 8 for Savitch 9thEd Chap5 Prob1 Time Converter"<<endl;
        cin>>wchProb;

        //Solve Problems
        switch(wchProb){
            case '1':{

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

                break;
                   }
            case '2':{

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

                break;
                    }
            case '3':{

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

                break;
                   }
            case '4':{

                //Declare Variables
                int input;//input holds the input

                cout<<"Collatz Conjecture Test"<<endl;
                cout<<"Input a sequence start"<<endl;

                //Initialize Variables
                cin>>input;

                //Process and output
                cout<<"Sequence start of "<<input<<" cycles to 1 in "<<
                collatz(input)<<" steps";//Calls the collatz function and outputs data

                break;
                    }
            case '5':{

                //Declare Variables
                int input,ns;//input holds user input, ns holds the number of steps

                cout<<"Collatz Conjecture Test"<<endl;
                cout<<"Input a sequence start"<<endl;

                //Initialize Variables
                cin>>input;

                //Process/Map inputs to outputs
                cout<<input;
                ns=collatzp(input);//set number of steps equal to return of collatz function

                //Output data
                cout<<"Sequence start of "<<input<<" cycles to 1 in "<<
                ns<<" steps";

                break;
                    }
            case '6':{

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

                break;
                    }
            case '7':{

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

                break;
                    }
            case '8':{

                //Declare Variables
                int h,m;//h holds current hour input, m holds current minute input
                char in;//in holds confirmation character to continue or stop the program

                cout<<"Military Time Converter to Standard Time\n";
                cout<<"Input Military Time hh:mm\n";

                do{//Loop to keep program running
                    input(h,m);//Get new input of hour and minute

                    convrt(h,m);//Convert time, which then also outputs this conversion

                    cout<<"Would you like to convert another time (y/n)\n";//Prompt user to continue or stop program
                    cin>>in;//User input to continue or stop
                }while(in != 'N' && in != 'n');//While user answers y, continue

                break;
                    }
            default:    cout<<"Exiting Menu, no problem selected"<<endl;
        }
        cout<<endl<<"Would you like to continue? (y/n)";
        cin>>exit;
    }while(exit != 'n' && exit != 'N');

    //Exit stage right or left!
    return 0;
}

int fctrl(int input){//Function to find the factorial of int input
    //Declare Variables
    int output=1;//Output holds the output value (total)
    for(int i=1;i<=input;i++){//Loop through factorial values
        output = output * i;//Calculate factorial
    }
    return output;//Return the factorial
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

int collatzp(int input){//Function to run Collatz sequence, input holds current place in sequence
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

float psntVal(float v, float i, int y){//Present Value function, v = Future Value, i = Interest Rate, y = Years
    float o;//o = Output
    
    o = v/(pow(i,y));//o=v/(i)^n Present Value Calculation
    
    return o;//Return Output
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

void input(int &hh,int &mm){//Handles input
    char xx;//Empty char to handle colon punctuation
    cin>>hh>>xx>>mm;//input hours, colon, minutes
}


void convrt(int &hh,int &mm){//Converts time from military to standard
    int nh(0);//nh holds the new Hour value, used in the output function
    char n;//n char holds 'A' or 'P' representing AM or PM
    
    if(mm > 60 || hh > 24){//Error handling (minutes over 60, hours over 24)
        cout<<hh<<":"<<mm<<" is not a valid time\n";
        return;//Exit function
    }
    
    if(hh == 0){//If hour = 0, set AM, add 12 for new hour
        n = 'A';
        nh = hh + 12;
        
    }else if(hh < 12 || hh == 24){//If hour 1-11, 24 set AM, new hour same as input hour
        n = 'A';
        nh = hh;
        
    }else if(hh == 12){//If hour = 12, set PM, new hour same as input hour
        n = 'P';
        nh = hh;
        
    }else{//If hour 13-23, set PM, subtract 12 for new hour
        n = 'P';
        nh = hh - 12;
    }
    
    output(hh,nh,mm,n);//Call the output function with hour, new hour, minutes, and AM/PM
}

//Handles output
void output(int &oh,int &nh,int &mm, char &nn){
    if(nn == 'P'){//If PM
        if(mm > 10){//If Minutes > 10
            cout<<oh<<":"<<mm<<" = "<<nh<<":"<<mm<<" PM\n";//Output Data
        }else{//If Minutes < 10
            cout<<oh<<":0"<<mm<<" = "<<nh<<":0"<<mm<<" PM\n";//Output Data
        }
    }else if(nn == 'A'){//If AM
        if(oh == 0){//If Hours = 0
            cout<<"00:"<<mm<<" = "<<nh<<":"<<mm<<" AM\n";//Output Data
        }else{//If hours != 0
            cout<<oh<<":"<<mm<<" = "<<nh<<":"<<mm<<" AM\n";//Output Data
        }
    }
}