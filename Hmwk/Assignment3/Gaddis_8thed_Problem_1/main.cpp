/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 * Purpose: Two compare two numbers and say which one is greater or less
 * Created on March 28, 2016, 9:30 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

int main(int argc, char** argv)
{
    //declare variables
    float num1, num2;
    
    //ask user for input
    cout << "1) Input a number" << endl;
    cin >> num1;
    cout << "2) Input a number" << endl;
    cin >> num2;
    
    //compare two numbers and out put results
    if(num1 < num2)
    {
        cout << num1 << " is less than " << num2 <<endl;
    }
    else if(num1 > num2)
    {
        cout << num1 << " is greater than " << num2 <<endl;
    }
    else if(num1 == num2)
    {
        cout << num1 << " is equal to " << num2 <<endl;
    }
    return 0;
}

