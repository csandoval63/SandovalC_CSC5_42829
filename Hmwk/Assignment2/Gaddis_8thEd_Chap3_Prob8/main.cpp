/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 *
 * Created on March 12, 2016, 12:17 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    float widget(12.5), pallet, numWid, totlbs;
    
    cout << "How much does the pallet weigh in pounds?" << endl;//ask user how much pallet weighs
    cin >> pallet;//input by user
    cout << "Pallet alone weighs: " << pallet << " lbs" <<endl;//display input by user

    cout << "How many Widgets are stacked on Pallet" << endl;//ask user how many widgets are on pallet
    cin >> numWid;//input by user
    cout << "Number of Widgets:" << numWid << endl;//display number of widgets inputed by user
    
    totlbs = (numWid * widget) + pallet;//Calculates total weight of pallets and widgets together
    cout << "Total weight of pallet with " << numWid << " widget(s) is: " << totlbs << " lbs" << endl;//Display the total amount to user
    
    return 0;
}

