/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 30, 2016, 9:44 AM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
    //Declare variables
    float var;
    int bVars;
    int sum;
    
    //Ask user input
    cout << "Please input a positive value" << endl;
    cin >> var;
    
    //Map functions and results
    if(var <= 50 && var >=1)
    {
        for(bVars = 1, sum = 0; sum <= var; bVars++ )
        {
            sum += bVars;
            cout << sum;
        }
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