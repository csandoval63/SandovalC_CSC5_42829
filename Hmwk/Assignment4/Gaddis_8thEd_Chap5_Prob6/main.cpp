/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 *
 * Created on April 4, 2016, 11:08 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, char** argv)
{
    //Declare variables
    float mph, dist, time, cTime;//cDist = count distance, cTime = count time

    cout << "What is the speed of the vehicle in mph?" << endl;
    cin >> mph;
    cout << "How many hours has it traveled?" << endl;
    cin >> time;
    
    
    cout << "Hour(s):"<< setw(20) << "Distance:" << endl;
    cout << "----------------------------" << endl;
    
    for(cTime = 1; cTime <= time; cTime++ )
    {
        dist = mph*cTime;
        cout << cTime << setw(23) << dist << endl;
    }

    return 0;
}
