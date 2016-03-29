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
    const int SIZE = 5;
    char uniM[SIZE];
    float recLen1, recLen2, recWid1, recWid2,
            recAr1, recAr2;
    
    //Ask user for units of measure used
    cout << "What are the rectangles measured in (abreviated form)?" << endl;
    cin >> uniM;
    
    //Ask user for input info for rectangle 1
    cout << "What is the length of first rectangle" << endl;
    cin >> recLen1;
    cout << "What is the width of first rectangle" << endl;
    cin >> recWid1;
    
    //Ask user for input info for rectangle 2
    cout << "What is the length of second rectangle" << endl;
    cin >> recLen2;
    cout << "What is the width of second rectangle" << endl;
    cin >> recWid2;
    
    //Equation.
    recAr1 = recLen1 * recWid1;
    recAr2 = recLen2 * recWid2;
    
    //map output results
    if(recAr1 < recAr2)
    {
        cout << "Area of First rectangle " << recAr1 << uniM
             << " is less than Area of second rectangle " << recAr2 << uniM << endl;
    }
    else if(recAr1 > recAr2)
    {
        cout << "Area of First rectangle " << recAr1 << uniM 
             << " is greater than Area of second rectangle " << recAr2 << uniM << endl;
    }
    else if(recAr1 == recAr2)
    {
        cout << "Area of First rectangle " << recAr1 << uniM
             << " is equal than Area of second rectangle " << recAr2 << uniM << endl;
    }
    
    return 0;
}

