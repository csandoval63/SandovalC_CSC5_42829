/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 * Purpose: Use case switch statement to display roman numeral version of numbers 1-10
 * Created on March 28, 2016, 10:01 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    //declare variables
    int var;
    
    //Input values
    cout << "Please input a variable 1 through 10\n"
            "to get roman numeral version of number" << endl;
    cin >> var;
    
    //map the inputs to the outputs
    switch (var)
    {
        case 1:
        {
            cout << "Roman Numeral verion of "<< var << " is I." << endl;
            cout << endl;
            break;
        }
        case 2:
        {
            cout << "Roman Numeral verion of "<< var << " is II." << endl;
            cout << endl;
            break;
        }
        case 3:
        {
            cout << "Roman Numeral verion of "<< var << " is III." << endl;
            cout << endl;
            break;
        }
        case 4:
        {
            cout << "Roman Numeral verion of "<< var << " is IV." << endl;
            cout << endl;
            break;
        }
        case 5:
        {
            cout << "Roman Numeral verion of "<< var << " is V." << endl;
            cout << endl;
            break;
        }
        case 6:
        {
            cout << "Roman Numeral verion of "<< var << " is VI." << endl;
            cout << endl;
            break;
        }
        case 7:
        {
            cout << "Roman Numeral verion of "<< var << " is VII." << endl;
            cout << endl;
            break;
        }
        case 8:
        {
            cout << "Roman Numeral verion of "<< var << " is VIII." << endl;
            cout << endl;
            break;
        }
        case 9:
        {
            cout << "Roman Numeral verion of "<< var << " is IX." << endl;
            cout << endl;
            break;
        }
        case 10:
        {
            cout << "Roman Numeral verion of "<< var << " is X." << endl;
            cout << endl;
            break;
        }
        default:
        {
            cout << "Invalid Input!\nPlease enter a number between 1 and 10." << endl;
        }
    }

    return 0;
}

