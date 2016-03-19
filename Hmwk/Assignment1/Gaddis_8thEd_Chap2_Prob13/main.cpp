/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 *
 * Created on March 4, 2016, 9:17 PM
 * Homework pg 81 chapter 2 #13
 * Purpose: An electronics company sells circuit boards at a 35 percent profit. Write a program that will calculate the selling price of a circuit board that costs $14.95. Display the result on the screen.
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
    int price, made, profit;
    price = 14.95;//Product price
    made = 14.95 * .35;//Multiply price and percent profit(35%)
    profit = price + made;//add profit to product price
    cout<<"Selling price to make profit on Circuit Board is $"<<profit<<endl;
    return 0;
}

