/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 * Created on April 27, 2016, 8:05 AM
 * Purpose:  Using Random numbers, check out stats of dice throwing
 */

//System Libraries

#include <iostream>// I/O
#include <cstdlib> //Rand and set random
#include <ctime>   // Utilize time to set the seed 

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv)
{
    //set random number seed for variablitily/different numbers
    
    //unsigned seed = time(0);
    //srand(seed);
    //^^^^ is equal to this
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    unsigned char sumDie, die1 ,die2;
    unsigned int nThrows = 36000;
    const int SIZE = 13;
    unsigned short freq[SIZE] = {};

    //Throw the dice (loop)
    for( unsigned short thrwDie = 1; thrwDie <= nThrows; thrwDie++ )
    {
        //Randomly generate the throw and the sum
        die1 = rand() % 6 + 1;//Number between [1-6]
        die2 = rand() % 6 + 1;//Number between [1-6]
        sumDie = die1 + die2;//Number between [2-12]
        freq[sumDie]++;
    }
    
    //Output the results
    cout << "The total throw of the die = " << nThrows << endl;
    
    int total = 0;
    for(int i = 2; i < SIZE; i++)
    {
        cout << i << " was thrown " << freq[i] << " times" << endl;
        total += freq[i];
    }

    cout << "The titak throw of Die = " << total <<endl;
    
    //Exit Stage Right!
    return 0;
}