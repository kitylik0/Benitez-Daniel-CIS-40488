/*
 * File:   main.cpp
 * Author: Daniel Benitez
 * Created on January 3, 2017, 12:15 PM
 * Purpose: Calculate the Paycheck
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science Values
//as well as Conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float hrsWrkd,payRate,payChck;
    
    //Input values 
    cout<<"This Progam Calculates your Paycheck"<<endl;
    cout<<"Your hours worked and pay rate are required"<<endl;
    cout <<"Input your hours worked in hours"<<endl;
    cin>>hrsWrkd;
    cout<<"Input your pay rate in $'s/hr"<<endl;
    cin>>payRate;
    
    //Process by mapping inputs to outputs
    payChck=payRate*hrsWrkd;
    
    //Outputs Values
    cout<<"Your Paycheck = $"<<payChck<<endl;
    
    //Exit stage right!
    return 0;
}

