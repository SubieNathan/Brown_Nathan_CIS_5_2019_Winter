/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 10, 2019, 12:46 PM
 * Purpose:  Menu example
 */

//System Libraries
#include <iostream>//Input/Output Library
#include <cstdlib> //Random Library
#include <iomanip> //Format Library
#include <ctime>   //Time Library
#include <cmath>   //Math Library
#include <string>  //String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float CNVYRMN=12;//Conversion 12 months in a year
const float PERCENT=100;//Conversion to percentage
const float PENNIES=100;//Conversion to pennies
const float HALFPNY=0.005F;//Half a penny
const float CNVLBGR=4.53592e2f;//Conversion from lbs to grams

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char wchProb;//Choose which problem

    //Initialize or input i.e. set variable values
    cout<<"Menu Program"<<endl;
    cout<<"Type 1 for Gaddis 9thEd Chap4 Prob8 SortNames"<<endl;
    cout<<"Type 2 for Gaddis 9thEd Chap4 Prob11 Books"<<endl;
    cout<<"Type 3 for Gaddis 9thEd Chap12 Prob12 BankCharges"<<endl;
    cout<<"Type 4 for Gaddis 9thEd Chap4 Prob14 Race"<<endl;
    cout<<"Type 5 for Gaddis 9thEd Chap4 Prob23 ISP"<<endl;
    cout<<"Type 6 for Savitch 9thEd Chap3 PracProb1 RockPaperScissors"<<endl;
    cout<<"Type 7 for Savitch 9thEd Chap3 PracProb4 CompatibleSigns"<<endl;
    cout<<"Type 8 for Savitch 9thEd Chap3 Prob3 Roman Conversion"<<endl;
    cin>>wchProb;
    
    //Solve Problems
    switch(wchProb){
        case '1':{
            //Declare Variables
            string in1, in2, in3, out1, out2, out3;
            //Initialize or input i.e. set variable values
            cout<<"Sorting Names\nInput 3 names\n";
            cin>>in1>>in2>>in3;
            //Map inputs -> outputs
            if(in1 < in2){
                //in1 < in2
                if (in3 < in1){
                    //in3 < in1 < in2
                    out1 = in3;
                    out2 = in1;
                    out3 = in2;
                }else if(in3 > in2){
                    //in1 < in2 < in3
                    out1 = in1;
                    out2 = in2;
                    out3 = in3;
                }else{
                    //in1 < in3 < in2
                    out1 = in1;
                    out2 = in3;
                    out3 = in2;
                }
            }else{
                //in2 < in1
                if (in3 < in2){
                    //in3 < in2 < in1
                    out1 = in3;
                    out2 = in2;
                    out3 = in1;
                }else if(in3 > in1){
                    //in2 < in1 < in3
                    out1 = in2;
                    out2 = in1;
                    out3 = in3;
                }else{
                    //in2 < in3 < in1
                    out1 = in2;
                    out2 = in3;
                    out3 = in1;
                }
            } 
            //Display the outputs
            cout<<out1<<endl<<out2<<endl<<out3;

            break;
               }
        case '2':{
            //Declare Variables
            int input, points;
            //Initialize or input i.e. set variable values
            cout<<"Book Worm Points\nInput the number of books purchased this month.\n";
            cin>>input;
            //Map inputs -> outputs
            if(input >= 0){
                if(input == 0){
                    points = 0;
                }else if(input == 1){
                    points = 5;
                }else if(input == 2){
                    points = 15;
                }else if(input == 3){
                    points = 30;
                }else{
                    points = 60;
                }
            }
            //Display the outputs
            cout<<"Books purchased =  "<<input<<endl;
            cout<<"Points earned   = "<<points;

            break;
                }
        case '3':{
            //Set the random number seed
            std::cout << std::setprecision(2);
            std::cout << std::fixed;
            //Declare Variables
            float balance, checks, checkFee, monthlyFee, lowBal, newBal;
            //Initialize or input i.e. set variable values
            cout<<"Monthly Bank Fees\nInput Current Bank Balance and Number of Checks\n";
            cin>>balance>>checks;
            //Map inputs -> outputs
            if (balance >= 0){
                if(checks >= 0){
                    if(checks < 20){
                        checkFee = checks * 0.10;
                    }else if(checks >= 20 && checks < 40){
                        checkFee = checks * 0.08;
                    }else if(checks >=40 && checks < 60){
                        checkFee = checks * 0.06;
                    }else{
                        checkFee = checks * 0.04;
                    }
                }
                monthlyFee = 10;
                if(balance < 400){
                    lowBal = 15.00;
                }
                newBal = balance - checkFee - monthlyFee - lowBal;

                cout<<"Balance     $   "<<balance<<endl;
                cout<<"Check Fee   $     "<<checkFee<<endl;
                cout<<"Monthly Fee $    "<<monthlyFee<<endl;
                if(lowBal < 15){
                    cout<<"Low Balance $     "<<lowBal<<endl;
                }else{
                    cout<<"Low Balance $    "<<lowBal<<endl;
                }
                if(newBal >= 100){
                cout<<"New Balance $   "<<newBal;
                }else{
                cout<<"New Balance $    "<<newBal;
                }
            }else{
                cout<<"Your account has been overdrawn!";
            }

            break;
               }
        case '4':{
            //Declare Variables
            int valid = 1;
            int timeIn[3];
            int timeOut[3];
            string nameIn[3];
            string nameOut[3];
            //Initialize or input i.e. set variable values
            cout<<"Race Ranking Program\nInput 3 Runners\nTheir names, then their times";
            for(int i=0; i<3; i++){
                cin>>nameIn[i]>>timeIn[i];
                if(timeIn[i] < 0){
                    valid = 0;
                }
            }
            //Map inputs -> outputs
            if(valid == 1){
                if(timeIn[0]<timeIn[1]){
                    //0<1
                    if(timeIn[2]<timeIn[0]){
                        //2<0<1
                        timeOut[0] = timeIn[2];
                        timeOut[1] = timeIn[0];
                        timeOut[2] = timeIn[1];
                        nameOut[0] = nameIn[2];
                        nameOut[1] = nameIn[0];
                        nameOut[2] = nameIn[1];
                    }else if(timeIn[2]>timeIn[1]){
                        //0<1<2
                        timeOut[0] = timeIn[0];
                        timeOut[1] = timeIn[1];
                        timeOut[2] = timeIn[2];
                        nameOut[0] = nameIn[0];
                        nameOut[1] = nameIn[1];
                        nameOut[2] = nameIn[2];
                    }else{
                        //0<2<1
                        timeOut[0] = timeIn[0];
                        timeOut[1] = timeIn[2];
                        timeOut[2] = timeIn[1];
                        nameOut[0] = nameIn[0];
                        nameOut[1] = nameIn[2];
                        nameOut[2] = nameIn[1];
                    }
                }else{
                    //1<0
                    if(timeIn[2]<timeIn[1]){
                        //2<1<0
                        timeOut[0] = timeIn[2];
                        timeOut[1] = timeIn[1];
                        timeOut[2] = timeIn[0];
                        nameOut[0] = nameIn[2];
                        nameOut[1] = nameIn[1];
                        nameOut[2] = nameIn[0];
                    }else if(timeIn[2]>timeIn[0]){
                        //1<0<2
                        timeOut[0] = timeIn[1];
                        timeOut[1] = timeIn[0];
                        timeOut[2] = timeIn[2];
                        nameOut[0] = nameIn[1];
                        nameOut[1] = nameIn[0];
                        nameOut[2] = nameIn[2];
                    }else{
                        //1<2<0
                        timeOut[0] = timeIn[1];
                        timeOut[1] = timeIn[2];
                        timeOut[2] = timeIn[0];
                        nameOut[0] = nameIn[1];
                        nameOut[1] = nameIn[2];
                        nameOut[2] = nameIn[0];
                    }
                }
            }
            //Display the outputs
            for(int i=0; i<3; i++){
                if(timeOut[i] >= 100){
                    cout<<endl<<nameOut[i]<<"\t"<<timeOut[i];
                }else{
                    cout<<endl<<nameOut[i]<<"\t "<<timeOut[i];
                }
            }
            
            break;
                }
        case '5':{
            //Declare Variables
            char package;
            bool valid = true;
            float hours, bill;
            //Initialize or input i.e. set variable values
            cout<<"ISP Bill\nInput Package and Hours\n";
            cin>>package>>hours;
            //Map inputs -> outputs
            if(hours > 744){
                valid = false;
                cout<<"Please enter a number of hours less than or equal to 744.";
            }
            if(package == 'A' || package == 'a'){
                bill = 9.95;
                hours -= 10;
                if(hours > 0){
                    bill += (hours * 2);
                }
            }else if(package == 'B' || package == 'b'){
                bill = 14.95;
                hours -= 20;
                if(hours > 0){
                    bill += (hours * 1);
                }
            }else if(package == 'C' || package == 'c'){
                bill = 19.95;
            }else{
                cout<<"Please select a package.";
                valid = false;
            }
            //Display the outputs
            if(valid){
                cout<<"Bill = $ "<<bill;
            }
            
            break;
                }
        case '6':{
            //Declare Variables
            char p1, p2;
            //Initialize or input i.e. set variable values
            cout<<"Rock Paper Scissors Game\nInput Player 1 and Player 2 Choices\n";
            cin>>p1>>p2;
            //Map inputs -> outputs
            if(p1 == 'r' || p1 == 'R'){
                if(p2 == 'r' || p2 == 'R'){
                    cout<<"Nobody wins.";
                }else if(p2 == 'p' || p2 == 'P'){
                    cout<<"Paper covers rock.";
                }else if(p2 == 's' || p2 == 'S'){
                    cout<<"Rock breaks scissors.";
                }
            }else if(p1 == 'p' || p1 == 'P'){   
                if(p2 == 'r' || p2 == 'R'){
                    cout<<"Paper covers rock.";
                }else if(p2 == 'p' || p2 == 'P'){
                    cout<<"Paper ties with paper.";
                }else if(p2 == 's' || p2 == 'S'){
                    cout<<"Scissors cuts paper.";
                }
            }else if(p1 == 's' || p1 == 'S'){
                if(p2 == 'r' || p2 == 'R'){
                    cout<<"Rock breaks scissors.";
                }else if(p2 == 'p' || p2 == 'P'){
                    cout<<"Scissors cuts paper.";
                }else if(p2 == 's' || p2 == 'S'){
                    cout<<"Scissors tie with scissors.";
                }
            }
            
            break;
                }
        case '7':{
            //Declare Variables
            string sign1 = "", sign2 = "", answer = "";
            //Initialize or input i.e. set variable values
            cout<<"Horoscope Program which examines compatible signs.\nInput 2 signs.\n";
            cin>>sign1>>sign2;
            //Map inputs -> outputs
            if(sign1 == "Aries" || sign1 == "Leo" || sign1 == "Sagittarius"){
                if(sign2 == "Aries" || sign2 == "Leo" || sign2 == "Sagittarius"){
                    answer = "compatible Fire";
                }else{
                    answer = "not compatible";
                }
            }else if(sign1 == "Taurus" || sign1 == "Virgo" || sign1 == "Capricorn"){
                if(sign2 == "Taurus" || sign2 == "Virgo" || sign2 == "Capricorn"){
                    answer = "compatible Earth";
                }else{
                    answer = "not compatible";
                }
            }else if(sign1 == "Gemini" || sign1 == "Libra" || sign1 == "Aquarius"){
                if(sign2 == "Gemini" || sign2 == "Libra" || sign2 == "Aquarius"){
                    answer = "compatible Air";
                }else{
                    answer = "not compatible";
                }
            }else if(sign1 == "Cancer" || sign1 == "Scorpio" || sign1 == "Pisces"){
                if(sign2 == "Cancer" || sign2 == "Scorpio" || sign2 == "Pisces"){
                    answer = "compatible Water";
                }else{
                    answer = "not compatible";
                }
            }
            //Display the outputs
            cout<<sign1<<" and "<<sign2<<" are "<<answer<<" signs.";
            
            break;
                }
        case '8':{
                //Declare Variables
                int input, n, n1, n10, n100, n1000;
                string answer;
                //Initialize or input i.e. set variable values
                cout<<"Arabic to Roman numeral conversion.\nInput the integer to convert.\n";
                cin>>input;
                n = input;
                //Map inputs -> outputs
                if(n >= 1000 && n <= 3000){//Validate input
                    n1000 = (n/1000)%10;
                    for(int i = n1000; i>0; i--){
                        answer += "M";
                    }

                    n100 = (n/100)%10;
                    switch(n100){
                        case 1:
                        case 2:
                        case 3:
                            for(int i = n100; i>0; i--){
                                answer += "C";
                            }
                            break;
                        case 4:
                            answer += "CD";
                            break;
                        case 5:
                            answer += "D";
                            break;
                        case 6:
                        case 7:
                        case 8:
                            answer += "D";
                            for(int i = n100; i>5; i--){
                                answer += "C";
                            }
                            break;
                        case 9:
                            answer += "CM";
                            break;
                    }

                    n10 = (n/10)%10;
                    switch(n10){
                        case 1:
                        case 2:
                        case 3:
                            for(int i = n10; i>0; i--){
                                answer += "X";
                            }
                            break;
                        case 4:
                            answer += "XL";
                            break;
                        case 5:
                            answer += "L";
                            break;
                        case 6:
                        case 7:
                        case 8:
                            answer += "L";
                            for (int i = n10; i>5; i--){
                                answer += "X";
                            }
                            break;
                        case 9:
                            answer += "XC";
                            break;
                    }

                    n1 = n%10;
                    switch(n1){
                        case 1:
                        case 2:
                        case 3:
                            for(int i = n1; i>0; i--){
                                answer += "I";
                            }
                            break;
                        case 4:
                            answer += "IV";
                            break;
                        case 5:
                            answer += "V";
                            break;
                        case 6:
                        case 7:
                        case 8:
                            answer += "V";
                            for(int i = n1; i>5; i--){
                                answer += "I";
                            }
                            break;
                        case 9:
                            answer += "IX";
                            break;
                    }

                    cout<<input<<" is equal to "<<answer;
                }else{
                    cout<<input<<" is Out of Range!";
                }
            
            break;
                }
        default:    cout<<"Exiting Menu, no problem selected"<<endl;
    }

    //Exit stage right or left!
    return 0;
}