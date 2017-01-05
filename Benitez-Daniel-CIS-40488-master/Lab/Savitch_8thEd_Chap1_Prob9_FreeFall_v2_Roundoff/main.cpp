/*
 * File:   main.cpp
 * Author: Daniel Benitez
 * Created on January 3, 2017, 12:15 PM
 * Purpose: Template for C++
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, VC, -> Math/Science Values
//as well as Conversions from system of units to 
//another
const float GRAVITY=3.2174e1f;//Gravity at sea level ft/sec

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float time,     //time in seconds
          distnce; //Distance in feet

    
    //Input values 
    cout<<"This problem solves the distance traveled"<<endl;
    cout<<"in free-fall under earth gravity"<<endl;
    cout<<"Input the time during Free-fall in seconds"<<endl;
    cin>>time;
    
    //Process by mapping inputs to outputs
    distnce=GRAVITY*time*time/2;
    int id=distnce*100+0.5; //Rounding 2 Decimal places
    distnce=id/100.0f;

    
    //Outputs Values
    cout<<"The distance fallen = "<<distnce<<" ft"<<endl;

    //Exit stage right!
    return 0;
}

