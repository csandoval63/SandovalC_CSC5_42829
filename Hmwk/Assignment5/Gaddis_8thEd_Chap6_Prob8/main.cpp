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

//User Libraries

//Global Constants

//Function Prototypes
unsigned short coinTos(unsigned short);

//Execution Begins Here!
int main(int argc, char** argv)
{
    //declare variables
    int tTossed, cTimes;//tTossed = times tossed, cTimes counter for tosses
    unsigned short hort;  //heads = 1 or tails = 2
    unsigned short heads, tails;
    
    //random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //get tosses
    cout << "How many tosses, would you like to do on the coin?"<< endl;
    cin >> tTossed;
    
    //tosser
    for (cTimes=0; cTimes < tTossed; ++cTimes)
    {
        hort = coinTos(hort);
        if (hort ==1 )
        {
            cout << "Heads" << endl;
            heads++;
        }
        else if (hort ==2 )
        {
            cout << "Tails" << endl;
            tails++;
        }
    }
    
    return 0;
}

//Random number generator with 2 or 1
unsigned short coinTos(unsigned short hort)
{
    // mod 2 to get value of 2 or 1 for heads or tails /hort
    hort = rand() %2 + 1; 
    
    //return value of hort
    return hort;
}