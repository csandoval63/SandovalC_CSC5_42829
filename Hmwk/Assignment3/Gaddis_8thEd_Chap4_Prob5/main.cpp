/* 
 * File:   main.cpp
 * Author: mrgig
 * Purpose: Calculate bmi and status of weight
 * Created on March 29, 2016, 11:39 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
    //Declare Variables
    float weight, height, bmi;

    //Input variables
    cout << "Please enter your weight in lbs: " << endl;
    cin >> weight;
    cout << "Please enter your height in inches: " << endl;
    cin >> height;
    
    
    //Calculate the variables
    bmi = (weight * 703) / pow(height, 2);
    
    //Output and results Variables
    if(bmi >= 18.5 && bmi <= 25)
    {
        cout << "Your bmi " << bmi << " indicates your weight is optimal." << endl;
    }
    else if(bmi < 18.5)
    {
        cout << "Your bmi " << bmi << " indicates you are under weight." << endl;
    }
    else if(bmi > 25)
    {
        cout << "Your bmi " << bmi << " indicates you are over weight." << endl;
    }
    
    return 0;
}