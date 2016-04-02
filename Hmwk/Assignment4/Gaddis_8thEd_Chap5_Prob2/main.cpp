/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 30, 2016, 10:37 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    int ascii;

    for(ascii = 0; ascii <= 177;)
    {
       cout << char(ascii++) << char(ascii++) << char(ascii++) << char(ascii++) 
            << char(ascii++) << char(ascii++) << char(ascii++) << char(ascii++) 
            << char(ascii++) << char(ascii++) << char(ascii++) << char(ascii++) 
            << char(ascii++) << char(ascii++) << char(ascii++) << char(ascii++) 
            << endl;
    }

    return 0;
}