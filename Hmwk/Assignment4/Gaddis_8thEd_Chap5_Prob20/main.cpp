/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 *
 * Created on April 4, 2016, 9:06 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{ 
    //Declare variables
    const int MIN_VALUE = 1, MAX_VALUE = 50;//Sets constant min value and max to give student workable problems
   
    int ranNum, guess;
    
    //seed time need for random values within max and min values
    unsigned seed = time(0);
    srand(seed);
    
    
    //FUnctions carried out
    ranNum = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    
    //Outputs for student
    cout << "Guess a number between 1 and 50" << endl;
    cin >> guess;
    
    //Map outputs and results
    do
    {
    if(guess != ranNum)
        {
         cout << "Guess again, Your guess was " << guess << endl;
         cin >> guess;
        }
    }
    while(guess < ranNum || guess > ranNum);
    
    if(guess == ranNum)
    {
        cout << "Congrats You win correct guess was " << ranNum << endl;
    }
    
    return 0;
}