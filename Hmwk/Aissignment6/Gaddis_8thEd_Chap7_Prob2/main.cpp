/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 * Purpose: rainfall
 * Gaddis chapter 7 problem 2
 * Created on May 15, 2016, 10:18 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
{
   //declare variables
    const int NUMBER = 13;//set to 13 to get the correct cout value when asking for value
    float uInput[NUMBER], bigNum, smalNum, total(0), averge(0);
    
    // gets values from user 
    for(int i = 1; i < NUMBER;)
    {
        cout << "Enter Month #" << i << " rain amount: ";
        cin >> uInput[i];
        if(uInput[i] >= 0)
        {
            i++;
        }
        else
        {
            cout << "\nPLeaseEnter correct value for Month #" << i << "\n";
        }
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
    //finds the total amount of rainfall
    for(int counter; counter < NUMBER; counter++)
    {
        total += uInput[counter];
    }
    //finds the average rainfall ammount 
    averge = (total / NUMBER);
    
    //displays max and min value
    cout << "\nLargest Amount of rain fall: " << bigNum << "in\n"
            "Smallest Amount of rain fall: " << smalNum << "in\n"
            "Average rain fall amount: " << averge << "in\n"
            "Total Rainfall: "<< total << "in" << endl;
    
    //exit
    return 0;
}