/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 * Purpose: Determine if Month * day = year
 * Created on March 28, 2016, 10:26 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    //declare variables
    int month, day, year;
    
    //Asks for user input
    cout << "To determine whether Month times the day is equal to year" << endl;
    cout << "Please enter day in numeric form" << endl;
    cin >> day;
    cout << "Please enter month in numeric form" << endl;
    cin >> month;
    cout << "Please enter year in numeric form" << endl;
    cin >> year;
    
    cout << "Day: " << day << endl;
    cout << "Month: " << month << endl;
    cout << "Year: " <<year << endl;
    cout << "\nEquation: " << day << "*" << month << "=" << year << endl;
    //map input with results
    if(year == month * day)
    {
        cout << "The date is Magic" << endl;
    }
    else if(year != month * day)
    {
        cout << "The date is not Magic" << endl;
    }
    
    return 0;
}

