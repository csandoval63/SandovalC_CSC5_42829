/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 *
 * Created on April 27 2016, 8:22 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

// Function Prototypes
float celsius(float);

// Execution begins here
int main(int argc, char** argv)
{
        cout << "Fahrenheit | " << setw(12) << " | Celsius" << endl;
	cout << "-------------------------" << endl;

	// ctf convert values from 0 thru 20 to celsuis from farenhiet
	for(int ctf = 1; ctf < 21; ctf++)
        {
                cout << setw(4) << ctf << setw(10) << "|" << setw(10) << fixed
                     << showpoint << setprecision(2)
                     << celsius(ctf) << endl; 
	}

        return 0;
}

float celsius(float farhnt)
{
        //return ((5/9) * (Fahrenheit - 32)) given from book
        //make sure to add.0f to remind proram its a float
        return ((5/9.0f) * (farhnt - 32.0f));
}