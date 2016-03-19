/* 
* File:   main.cpp
* Author: Christian Sandoval
*
* Created on March 4, 2016, 11:47 AM
* Project purpose from chapter 2 page 79 #1
 * Purpose: Write a program that stores the integers 50 and 100 in variables, and stores the sum of the two in a variable named total.
*/

#include <iostream>

using namespace std;

/*
*
*/

int main(int argc, char** argv)
{
    int var0, var1, total;
    var0 = 50;//Integer given
    var1 = 100;//Integer given
    total = (var0 + var1);// Total between the two added
    cout<<var0<<"+"<<var1<<"="<<total<<endl;//Display
    return 0;
}