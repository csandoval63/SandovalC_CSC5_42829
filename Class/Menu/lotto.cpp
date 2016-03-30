/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 *
 * Created on March 21, 2016, 9:40 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    //set char size for answer of yes or no
    const int SIZE = 5;
    char ansM[SIZE];
    
    //declare variables
    float lotA, lumPen(.62), taxPen(.52), marPen(.50), keptLot;
    
    //ask user for lottery winnings ammount
    cout << "How much is the lottery winnings amount? \n$";
    cin >> lotA;
    cin.ignore(256,'\n');
    //Ask if winner/user is married
    cout << "Are you married?(enter y for yes or n for no in lower case)" << endl;
    cin.getline(ansM, SIZE);
    
    //Calculates remaining after penalties being taken depending on marriage answer
    //if answer is yes
    // string.compare("")==0 // true
    // string.compare("")!=0 // not true
    if()
    {
        keptLot = (((lotA*(lumPen))*(marPen))*taxPen);
        cout << "After penalties with marriage you will keep $" << keptLot << endl;
    }
    //if answer is no
    else if('n')
    {   
        keptLot = ((lotA*(lumPen))*taxPen);
        cout << "After penalties with no marriage you will keep $" << keptLot << endl;
    }
    else
    {
        cout << "Please enter valid marriage response" << endl;
    }
    return 0;
}