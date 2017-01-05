/*
 * File:   main.cpp
 * Author: Daniel Benitez
 * Created on January 4, 2017, 
 * Purpose: Land Calculation
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
const int CVNACFT=43560;

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int nAcres,nFt2;
    
    
    //Input values 
    cout<<"This is a converstions program"<<endl;
    cout<<"from number of Acres to Feet squared "<<endl;
    cout<<"Input Number of Acres"<<endl;
    cin>>nAcres;
            
    //Process by mapping inputs to outputs
    nFt2=nAcres*CVNACFT;
    
    
    //Outputs Values
    cout<<"The number of Acres is "<<nAcres<<endl;
    cout<<"Equivalent to  "<<nFt2<<"(ft^2)"<<endl;
    //Exit stage right!
    return 0;
}

