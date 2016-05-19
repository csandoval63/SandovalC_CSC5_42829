/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 * Purpose: INput 10 value and get largest and smallest number
 * Gaddis chapter 7 problem 4
 * Created on May 15, 2016, 10:18 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

//Execution Beings Here
int main(int argc, char** argv)
{
    int SIZE, larger[SIZE], array[SIZE], num;//size of array, the letter n,larger array is the  numbers larger than n
    
    //Asks user for array size
    cout <<"what is the size of the array?"<<endl;
    cin >> SIZE;
    
    cout << "Please input the integers of the array." << endl;
    
    for (int counter=0; counter < SIZE; counter++)
    {
        cout << "Integer ["<< counter + 1 << "]: ";
        cin >> array[counter];   
    }
    
    cout <<"Pick a number for n." << endl;
    cin >> num;
    
    cout <<"Numbers that are greater than " << num << ": ";
    for (int counter=0; counter < SIZE; counter++)
    {
        if (num < array[counter])
        {
            cout << array[counter]<<", ";
        }
    }
    
    return 0;
}