/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 * Purpose : Calculate cars mile per gallon
 * Created on March 18, 2016, 10:04 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    //Declare variables
    float fTank, fMiles, mpg;
    
    //ASk user for inputs for max gallons and max miles on full tank.
    cout << "How Many gallons of gas can your car hold?" << endl;
    cin >> fTank;
    
    cout << "How many miles can you drive on a full tank of gas?" << endl;
    cin >> fMiles;
    
    //Calculate mpg
    mpg = fMiles / fTank;
    
    //Display results
    cout << "Your cars miles per gallon is :" << mpg << endl;
    
    return 0;
}

