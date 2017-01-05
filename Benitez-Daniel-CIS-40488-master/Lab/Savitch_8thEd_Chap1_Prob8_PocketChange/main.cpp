/*
 * File:   main.cpp
 * Author: Daniel Benitez
 * Created on January 3, 2017, 12:15 PM
 * Purpose: PocketChange
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, VC, -> Math/Science Values
//as well as Conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    const char quarter=25,
            dime=10,
            nickle=5,
            penny=1;
    char nQuarts,nDimes,nNickls,nPenies;
    unsigned short total; //total pocket change in cents
    
    //Input values 
    cout<<"This calculates the amount of your poket change"<<endl;
    cout<<"How many Quarters, Nickels, Dimes, and Pennies do"<<endl;
    cout<<"you have in your pocket?"<<endl;
    cout<<"Type in all on the same line i.e. 3 4 0 2"<<endl;
    cout<<"Maximum of any value mus tbe less than 10"<<endl;
    cin>>nQuarts>>nDimes>>nNickls>>nPenies;
    
    //Process by mapping inputs to outputs
    total = (nQuarts-48)*quarter  +
            (nDimes-48)* dime     +
            (nNickls-48)*nickle   +
            (nPenies-48)*penny;

    
    //Outputs Values
    cout<<"The coins in you pokect =  "<<total<<" cents"<<endl;
    cout<<"The coin in your pocket = $"<<total/100.0f<<endl;

    //Exit stage right!
    return 0;
}

