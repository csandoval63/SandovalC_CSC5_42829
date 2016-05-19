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
    const int TYPES=5;
    string salsas[TYPES], minSal, maxSal; //salsas, min sales salsa, max sales salsa
    int sales[TYPES], total, bigNum, smalNum;       //sales of each salsa
    salsas[0]="mild";
    salsas[1]="medium";
    salsas[2]="sweet";
    salsas[3]="hot";
    salsas[4]="zesty";
    
    // gets values from user 
    for(int i = 0; i < TYPES;)
    {
        cout << "How many " << salsas[i] << " spice salsas were sold?\n";
        cin >> sales[i];
        if(sales[i] >= 0)
        {
            i++;
        }
        else
        {
            cout << "\nPlease Enter correct value of salsas sold" << i << endl;
        }
    }
    //finds the smallest value of inputs
    smalNum = sales[0];
    minSal = salsas[0];
    for(int counter = 1; counter < TYPES; counter++)
    {
        if (sales[counter]<smalNum)
        {
            smalNum = sales[counter];
            minSal= salsas[counter];
        }
    }
    // find the biggest value of inputs
    bigNum = sales[0];
    maxSal = salsas[0];
    for(int counter = 1; counter < TYPES; counter++)
    {
        if ( sales[counter] > bigNum)
        {
            bigNum = sales[counter];
            maxSal = salsas[counter];
        }
    }
    //finds the total amount of rainfall
    for(int counter; counter < TYPES; counter++)
    {
        total += sales[counter];
    }
    
    //results
    for (int counter = 0; counter < TYPES; counter++)
    {
        cout << "You sold " << sales[counter] << " jars of " 
             << salsas[counter] << " Salsa." << endl;
    }
    cout << "\nMost Sold Salsa: " << maxSal << "\n"
            "Least Sold Salsa: " << minSal << "\n"
            "Total Sold: "<< total << endl;
    
    //exit
    return 0;
}