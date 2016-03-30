/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 * Purpose: number of days and leap year in months
 * Created on March 29, 2016, 11:55 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    //Declare Variables
    float leapDiv;
    int month, year;
   
   
    //Input variables
    cout << "Please enter the month you would like to check in integer form: " << endl;
    cin >> month;
    cout << "Please enter the year: " << endl;
    cin >> year;
    
    
    //Calculate and out put results
    leapDiv = year % 100;
    
    //Output Variables
    if ( (leapDiv == 0) || (year % 400 == 0) || (year % 4 == 0) )
    {
        cout<<"The year is leap year."<<endl;

        if (month == 2)
        {
            cout << "Month " << month << " has 29 days" << endl;
        }
        else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            cout << "Month " << month << " has 31 days" << endl;
        }
        else if(month == 4 || month == 6 || month == 9 || month == 11)
        {
            cout << "Month " << month << " has 30 days" << endl;
        }
    }
    else if ( (leapDiv != 0) || (year % 400 != 0) || (year % 4 !=0 ) )
    {
        cout<<"The year is not leap year."<<endl;
            
        if (month == 2)
        {
                cout << "Month " << month << " has 28 days" << endl;
        }
        else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            cout << "Month " << month << " has 31 days" << endl;
        }
        else if(month == 4 || month == 6 || month == 9 || month == 11)
        {
            cout << "Month " << month << " has 30 days" << endl;
        }
    }
    //exit
    return 0;
}