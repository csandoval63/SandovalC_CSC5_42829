/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 * Sum of all variables before number inputed
 * Created on March 30, 2016, 9:44 AM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
    //Declare variables
    int var, bVars, sum;
    
    //Ask user input
    cout << "Please input a positive value" << endl;
    cin >> var;
    
    //Map functions and results
    if(var <= 50 && var >=1)
    {
        cout << "All variables before " << var << ": " << endl;
        for(bVars = 1, sum = 0; bVars <= var; bVars++ )
        {
            sum += bVars;
            cout << "variables: " << bVars << endl;
        }
        cout << "Sum of variables + " << var << " = " << sum << endl;
    }
    else if(var < 0) 
    {
        cout << "Please input a positive value" << endl;
    }
    else if(var > 50 || var < 1) 
    {
        cout << "Please input a number between 1 and 50" << endl;
    }
    
    return 0;
}