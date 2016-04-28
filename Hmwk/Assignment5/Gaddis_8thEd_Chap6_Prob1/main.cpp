/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 *
 * Created on April 25, 2016, 10:03 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

// Function Prototypes
float retmark(float, float);

// Execution begins here
int main(int argc, char** argv)
{
    // Declare and initialize variables
    // user-input variable
    float cost(0),percnt(0),retprce(0);

    // prompt the user for the item's price and the markup percentage
    cout << "What is the item's wholesale price? $";
    cin >> cost;
    cout << "Enter the markup percentage%: ";
    cin >> percnt;
    cout << "Wholesale Price: $" << cost << endl;
    cout << "Percentage Mark up: " << percnt << "%" << endl;
    
    percnt = (percnt/100);

    // call function to calculate the retail price
    retprce = retmark(cost, percnt);
	
    // output the result with 2 decimal places
    cout << fixed << setprecision(2) << showpoint;
    cout << "Item's retail price is $" << retprce << endl;
    return 0;
}

/*
* Purpose: calculate the item's retail price
*/
float retmark(float fuCost, float fuPrcnt)
{
	// declare and initialize variables
	float retail = 0;

	// calculate the retail price
	retail = fuCost + (fuCost * fuPrcnt);

	return retail;
}