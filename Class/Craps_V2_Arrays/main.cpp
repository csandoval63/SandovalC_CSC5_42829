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
#include <iomanip> // format

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv)
{
    //set random number seed for variablitily/different numbers
        
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    unsigned int  nThrows=0 , mxThrw=0;
    unsigned short nGames = 3600;
    unsigned short win = 0, lose = 0;
    const int SIZE = 13;

    //Throw the dice (loop)
    
    for( unsigned short game = 1; game <= nGames; game++ )
    {
        //Randomly generate the throw and the sum
        unsigned short die1 = rand() % 6 + 1;//Number between [1-6]
        unsigned short die2 = rand() % 6 + 1;//Number between [1-6]
        unsigned short sumDie = die1 + die2;//Number between [2-12]
        unsigned char cntThrw=1;
        nThrows++;
        
        if( sumDie== 7 || sumDie == 11)
            win++;
        else if (sumDie == 2 || sumDie == 3 || sumDie == 12)
            lose++;
        else
        {
            bool thrwAgn;
            do
            {
                bool thrwAgn = true;
                //Randomly generate the throw and the sum
                unsigned short die1 = rand() % 6 + 1;//Number between [1-6]
                unsigned short die2 = rand() % 6 + 1;//Number between [1-6]
                unsigned short sumDie2 = die1 + die2;//Number between [2-12]
                
                nThrows++;
                cntThrw++;
                if(mxThrw<cntThrw)
                    mxThrw=cntThrw;
                if(sumDie == sumDie2)
                {
                    win++;
                    thrwAgn != thrwAgn;
                }
                else if(sumDie2 == 7)
                {
                    lose++;
                    thrwAgn != thrwAgn;
                }
            }
            while(thrwAgn);
        }
    }
    
    //Output the results
    cout << "The total number of games of craps played = " << nGames << endl;
    cout << "Number of wins = " << win << endl;
    cout << "Number of losses = " << lose << endl;
    cout << "The total Games = " << (win+lose) << endl;
    cout << "Percentage games = " << 100.0f * win/nGames << "%" <<endl;
    cout << "Percentage games = " << 100.0f * lose/nGames << "%" <<endl;
    cout<< "The average throws per game = " << 1.0f * nThrows / nGames <<endl;
    cout<< "The Maximum number of throws in a game = " << mxThrw <<endl;

    cout << fixed << setprecision(2) << showpoint << endl;
    cout << "Throw" << setw(3) << "Win" << setw(3) << "Lose" << endl;
    for (int i = 2; i < SIZE; i++)
    {
        cout << setw(3) << i << setw(7) << 100.0f * fWin[i]/(fWin[i]+fLose[i]) 
             << setw(7) << 100.0f * fLose[i]/(fWin[i]+fLose[i]) << endl;
    }
    //Exit Stage Right!
    return 0;
}