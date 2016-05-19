/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 * Purpose: INput 10 value and get largest and smallest number
 * Gaddis chapter 7 problem 1
 * Created on May 15, 2016, 10:18 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
   //declare variables
    const int NUMBER = 11;//set to 11 to get the correct cout value when asking for value
    int uInput[NUMBER], bigNum, smalNum;
    
    // gets values from user 
    for(int i = 1; i < NUMBER; i++)
    {
        cout << "Enter #" << i << " Value: ";
        cin >> uInput[i];
    }
    //finds the smallest value of inputs
    smalNum = uInput[1];
    for(int counter = 1; counter < NUMBER; counter++)
    {
        if (uInput[counter]<smalNum)
        {
            smalNum = uInput[counter];
        }
    }
    // find the biggest value of inputs
    bigNum = uInput[1];
    for(int counter = 1; counter < NUMBER; counter++)
    {
        if ( uInput[counter] > bigNum)
        {
            bigNum = uInput[counter];
        }
    }
    //displays max and min value
    cout << "Largest Number: " << bigNum << "\n"
            "Smallest Number: " << smalNum << endl;
    
    //exit
    return 0;
}