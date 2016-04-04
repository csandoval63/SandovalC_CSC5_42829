/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 * Purpose: Membership cost
 * Created on April 3, 2016, 10:49 PM
 */


#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    //Declare variables
    float memfee, total, years;

    cout << "Membership cost over span of 6 years raised by 4% " << endl;

    for(years = 0, memfee = 2400; years <= 5; )
    {
        years ++;
        total += memfee + (memfee * .04) ;
        cout << "Year: " << years << " membership cost will be $" << total << endl;
    }

    cout << "In " << years << " years membership total cost will be $" << total << endl;

    return 0;
}