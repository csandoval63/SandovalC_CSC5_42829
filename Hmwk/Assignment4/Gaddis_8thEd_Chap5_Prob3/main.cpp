/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 * Purpose: Rising ocean Levels
 * Created on April 3, 2016, 9:02 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;


int main(int argc, char** argv)
{
    //Declare variables
    float oRisng, sumOyrs, years;

    cout << "Ocean level over span of 25 years will rise: " << endl;

    //output and map results
    for(years = 1, oRisng = 1.5; years <= 25; years++ )
    {
        sumOyrs = oRisng * years;
        cout << "Year: " << years << " Ocean level risen by " << sumOyrs << "mm"<< endl;
    }

    cout << "At 25 years ocean will have risen by: " << sumOyrs << "mm" << endl;

    return 0;
}