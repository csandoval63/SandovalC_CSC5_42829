/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 *
 * Created on March 13, 2016, 2:17 PM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char** argv)
{
    const int MIN_VALUE = 0, MAX_VALUE = 1000;//Sets constant min value and max to give student workable problems
    
    int val1, val2, sum;//starts values/sum
    char ch;//used for pausing
    
    //seed time need for random values within max and min values
    unsigned seed = time(0);
    srand(seed);
    
    
    //FUnctions carried out
    val1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) +MIN_VALUE;
    val2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) +MIN_VALUE;
    sum = val1 + val2;
    
    //Outputs for student
    cout << " " << val1 << "\n+" << val2 <<endl;
    cout << "----- Press [ENTER] for soltion";
    cin.get(ch);
    cout << sum << endl;
    
    return 0;
}

