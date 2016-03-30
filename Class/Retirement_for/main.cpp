/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 * Purpose: To Illustrate the rule of 72 by the way of a for loop
 * Created on March 30, 2016, 8:37 AM
 */

//System libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv)
{
    //Declare variables
    float salary = 6e4f; //$60,000
    float percDep = 1e-1f; //10% to save each year
    float pv = 0.0f; //Present value
    float iRate = 0.05f; //interest rate
    int nYears = 0; //Comparison of calculations to the rule of 72
    float fv = pv; //Future value
    float yrlyDep; // Yearly deposit in $'s
    float savRet; // Savings to retire in $'s
    
    //Calculate the approximate saving required to retire and yearly deposit
    savRet = salary/iRate;
    yrlyDep = salary * percDep;
    
    //Output initial conditions and set up the table
    cout << "Savings Required to retire = $" << savRet << endl;
    cout << "Yearly deposit/municipal bond purchase = $" << yrlyDep << endl;
    cout << "Interest rate = " << iRate * 100 << "%" << endl;  
    cout << "\nYears    Future Value" << endl;
    cout << fixed << setprecision(2) << showpoint;
    cout << setw(3) << nYears << setw(10) << " $" << fv << endl;
    
    //Loop each year until the future value is 2x the present value
    for(nYears = 1; fv < savRet; nYears++)
    {
        fv *= (1 + iRate);//yearly interest rate calculation
        fv += yrlyDep;
        cout << setw(3) << nYears << setw(10) << " $" << fv << endl;
    }
    
    //Exit
    return 0;
}

/* 
* FV Future Value
* PV present value
* (1+i) = year + interest, 
* Formula: FV = PV *(1+i)*(1+i)
* Formula: FV = PV *(1+i)pow(N)
* Formula: FV = PV *(1+i)*(1+i)
* Formula: Salary = (Savings * InterestRate)
* Formula: Savings = (Salary / InterestRate)
*/