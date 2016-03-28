/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 * Purpose: Compare the area of two calculated rectangles
 * Created on March 28, 2016, 10:43 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    //declare variables
    //const char SIZE = 3;
    float recLen1, reclen2, recWid1, recWid2,
            recAr1, recAr2;
    //char uniM;
    
    //Ask user for units of measure used
    //cout << "What are the rectangles measured in (abreviated form)?" << endl;
    //cin >> uniM;
    
    //Ask user for input info for rectangle 1
    cout << "What is the length of rectangle 1" << endl;
    cin >> recLen1;
    cout << "What is the width of rectangle 1" << endl;
    cin >> recWid1;
    
    //Ask user for input info for rectangle 2
    cout << "What is the length of rectangle 2" << endl;
    cin >> recLen1;
    cout << "What is the width of rectangle 2" << endl;
    cin >> recWid1;
    
    return 0;
}

