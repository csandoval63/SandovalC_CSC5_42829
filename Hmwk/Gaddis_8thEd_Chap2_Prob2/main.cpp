/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 *
 * Created on March 4, 2016, 9:17 PM
 * Homework pg 79 chapter 2 #2
 * The East Coast sales Division of a company generates 58 percent of total sales. Based on that percentage, write a program that will predict how much the East Coast Division will generate if the company has $8.6 million in sales this year.
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
    int crsales, genval;// crsales = value of sales, genval = ammount it will generate
    
    crsales = 8600000;// value of sales
    genval = (crsales * .58);// value multiplied by percentage of total sales
    cout<<"East Coast Division will generate $"<<genval<<" in total sales"<<endl;
    
    return 0;
}

