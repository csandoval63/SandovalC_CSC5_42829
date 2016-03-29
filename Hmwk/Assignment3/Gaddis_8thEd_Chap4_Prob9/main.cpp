/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 * Purpose: Create a money game that  all change equals a dollar
 * Created on March 28, 2016, 7:20 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
    //Declare variables
    int dollar, dimes, quatr, nicks, pennys, hlfdllr;
    
    //Ask user for input of coins
    cout << "How many dimes equal a dollar?" << endl;
    cin >> dimes;
    cout << "How many quarters equal a dollar?" << endl;
    cin >> quatr;
    cout << "How many nicks equal a dollar?" << endl;
    cin >> nicks;
    cout << "How many pennies equal a dollar?" << endl;
    cin >> pennys;
    cout << "How many half dollar coins equal a dollar?" << endl;
    cin >> hlfdllr;
    
    //Map outputs and reults
    if(dimes <= 9 && dimes >= 0)
    {
        cout << "The amount of dimes you entered was less" << endl;
    }
    if (quatr <= 3 && quatr >= 0)
    {
        cout << "The amount of quarters you entered was less" << endl;
    }
    if (nicks <= 19 && nicks >= 0)
    {
        cout << "The amount of nickels you entered was less" << endl;
    }
    if (pennys <= 99 && pennys >= 0)
    {
        cout << "The amount of pennies you entered was less" << endl;
    }
    if (hlfdllr <= 1 && hlfdllr >= 0)
    {
        cout << "The amount of half dollars you entered was less" << endl;
    }
    if(dimes > 10)
    {
        cout << "The amount of dimes you entered was greater" << endl;
    }
    if (quatr >4)
    {
        cout << "The amount of quarters you entered was greater" << endl;
    }
    if (nicks >20 )
    {
        cout << "The amount of nickels you entered was greater" << endl;
    }
    if (pennys > 100)
    {
        cout << "The amount of pennies you entered was greater" << endl;
    }
    if (hlfdllr > 2)
    {
        cout << "The amount of half dollars you entered was greater" << endl;
    }
    if(dimes == 10)
    {
        cout << "The amount of dimes is equal to a dollar" << endl;
    }
    if (quatr == 4)
    {
        cout << "The amount of quarters is equal to a dollar" << endl;
    }
    if (nicks == 20 )
    {
        cout << "The amount of nickels is equal to a dollar" << endl;
    }
    if (pennys == 100)
    {
        cout << "The amount of pennies is equal to a dollar" << endl;
    }
    if (hlfdllr == 2)
    {
        cout << "The amount of half dollars is equal to a dollar" << endl;
    }
    if ((hlfdllr == 2) && (pennys == 100) && (nicks == 20 ) && (quatr == 4) && (dimes == 10))
    {
        cout << "Congrats you win the game!!" << endl;
    }
    
    return 0;
}

