/* 
 * Title: Time Converter
 * Author: Nathan Brown
 * Created on 1/24/19
 * Purpose: Input Time value in Military time, Output Time value in Standard time
 */
 
//Libraries
#include <cstdlib>//General Utilities Library
#include <iostream>//Input/Output Library
using namespace std;

//Function Prototypes
void input(int &,int &);//Input function handles inputs
void convrt(int &,int &);//Convert function converts time and calls output function
void output(int &,int &,int &,char &);//Output function handles output and formatting
//Execution begins...
int main(int argc, char** argv){
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
    
    //Exit
    return 0;
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

//Hands output
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