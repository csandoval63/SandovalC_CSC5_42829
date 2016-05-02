/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 *
 * Created on April 27 2016, 8:22 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

// Function Prototypes
void getAccs(int&); 
void getLwst(int, int, int, int, int);

// Execution begins here
int main(int argc, char** argv)
{
        // Declare and initialize variables
        // user-input variables:
        int north = 0;
        int south = 0;
        int east = 0;
        int west = 0;
        int central = 0;
       
        // call reference function to get the number of accidents reported
        // in five different regions
        cout << "Enter the number of automobile accidents" << endl;
        cout << "Accidents in north north: ";
        getAccs(north);
        cout << " reporetd in South region: ";
        getAccs(south);
        cout << " reporetd in East region: ";
        getAccs(east);
        cout << " reporetd in West region: ";
        getAccs(west);	
        cout << " reporetd in Central region: ";
        getAccs(central);
	
        //get the function to find the lowest number of accidents reported
        //compared with min
        getLwst(north, south, east, west, central);

        return 0;
}

//Userinput for accidents
void getAccs(int& numAcc)
{
        //ask user for input accidents
        cin >> numAcc;
        
        //loop while number of accidents is less and 0 to reenter a valid number
        if(numAcc < 0)
        {
            do
            {
                 cout << "Please input a valid amount for accidents"
                         "cannot be less than 0." << endl;
                  //ask user for input again
                  cin >> numAcc;
            }
            while(numAcc < 0);
        }
        return;
}

////Get lowest value using min(variables,variables)
void getLwst(int num_n, int num_s, int num_e, int num_w, int num_c)
{
    //get lowest using min
    int safest = min(num_n, min(num_s, min(num_e, min(num_w, num_c))));
        
    if(safest == num_n)
    {
        cout << "North is the safest region to drive. Only "
             << safest << " accident(s) reported" << endl;
    }
    else if(safest == num_s)
    {
        cout << "South is the safest region to drive. Only "
             << safest << " accident(s) reported" << endl;
    }
    else if(safest == num_e)
    {
        cout << "North is the safest region to drive. Only "
             << safest << " accident(s) reported" << endl;
    }
    else if(safest == num_w)
    {
        cout << "North is the safest region to drive. Only "
             << safest << " accident(s) reported" << endl;
    }
    else if(safest == num_c)
    {
        cout << "North is the safest region to drive. Only "
             << safest << " accident(s) reported" << endl;
    }

    return;
}