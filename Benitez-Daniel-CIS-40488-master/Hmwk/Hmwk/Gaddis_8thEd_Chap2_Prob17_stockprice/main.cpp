/*
 * File:   main.cpp
 * Author: Daniel Benitez
 * Created on January 3, 2017, 12:15 PM
 * Purpose: Stock Calculater 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science Values
//as well as Conversions from system of units to 
//another
const unsigned char PERCENT=100; //

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables and Input values 
    unsigned char stkPrce=35;  // Units of $'s/share
    unsigned short nShares=750; //number of shares
    float comishn=2.0e-2f;   //percent commission
    unsigned short stkPaid,comPaid,totPaid;
    
    
    //Process by mapping inputs to outputs
    stkPaid=stkPrce*nShares;
    comPaid=stkPaid*comishn;
    totPaid=stkPaid+comPaid;
    
    //Outputs Values
    cout<<"Stock Price/Share  =$"<<static_cast<int>(stkPrce)<<endl;
    cout<<"Number of Shares   = "<<nShares<<"shares"<<endl;
    cout<<"Commission         = "<<comishn<<endl;
    cout<<"Stock Price        =$"<<stkPaid<<endl;
    cout<<"Commission Paid    =$"<<comPaid<<endl;
    cout<<"Total Paid         =$"<<totPaid<<endl;
    //Exit stage right!
    return 0;
}

