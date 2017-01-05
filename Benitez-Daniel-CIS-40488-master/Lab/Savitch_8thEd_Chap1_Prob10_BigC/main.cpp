/*
 * File:   main.cpp
 * Author: Daniel Benitez
 * Created on January 3, 2017, 12:15 PM
 * Purpose: Bic C
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
    char c;//Varible to build the big C with

    
    //Input values 
    cout<<"This program outputs a large C"<<endl;
    cout<<"With a letter the user chooses"<<endl;
    cout<<"What letter would you like?"<<endl;
    cin>>c;
    
    //Process by mapping inputs to outputs

    
    //Outputs Values
    cout<<"A big C with the letter "<<c<<endl;
    cout<<"    "<<c<<"  "<<c<<"  "<<c<<endl;
    cout<<"  "<<c<<"         "<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<"  "<<c<<"         "<<c<<endl;
    cout<<"    "<<c<<"  "<<c<<"  "<<c<<endl;

    //Exit stage right!
    return 0;
}

