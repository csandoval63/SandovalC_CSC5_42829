/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 * Created on March 16, 2016, 8:55 AM
 * Purpose:  InDependent if's
 * V2
 */

//System Libraries

#include <iostream>
#include <cstdlib>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv)
{
    //Declare variables
    float payRate, hrsWrkd, payChk;
    float ovrTime = 40;//where overtime begins
    
    //Initialize variables
    
    //Input values
    cout << "Input Pay Rate ($'s/hr) and hours worked both dd.dd format" << endl;
    cin >> payRate >> hrsWrkd;
    
    //Map the inputs to the outputs
    if(hrsWrkd <= ovrTime)payChk = hrsWrkd * payRate;
    if(hrsWrkd > ovrTime)payChk = hrsWrkd * payRate + (hrsWrkd - ovrTime)*payRate;
    if(hrsWrkd < 0 || hrsWrkd > 98)payChk = 0;
    
    //Output the results
    cout << "Paycheck = $" << payChk << "for"
            <<hrsWrkd<<"hours worked @ $"<<payRate<<"/hr" << endl;

    //Exit Stage Right!
    return 0;
}