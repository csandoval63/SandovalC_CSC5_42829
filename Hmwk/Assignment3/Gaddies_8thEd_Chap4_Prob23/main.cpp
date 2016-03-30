/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mrgig
 *
 * Created on March 29, 2016, 6:35 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
    //General Menu Format
    //Display the selection
    cout<<"1. Calculate the Area of a Circle"<<endl;
    cout<<"2. Calculate the Area of a Rectangle"<<endl;
    cout<<"3. Calculate the Area of a Triangle"<<endl;
    cout<<"4. Quit"<<endl;
    
    //Read the choice
    char choice;
    cin >> choice;
    
    //Solve a problem that has been chosen.
    switch(choice)
    {
            case 49:
            {
                //'1' in decimal
                const int PI = 	3.14159265358979323846;
                float cirR, cirAr;
                cout << endl;
                cout << "What is the radius of the circle?" << endl;
                cin >> cirR;
                cirAr = pow(PI*cirR, 2);
                cout << "Area of Circle = " << cirAr << endl;
                break;
            }
            case 50:
            {
                //'2' in decimal
                float recW, recL, recArea;
                cout << endl;
                cout << "What is the width of the rectangle?" << endl;
                cin >> recW;
                cout << "What is the length of the rectangle?" << endl;
                cin >> recL;
                recArea = recW * recL;
                cout << "Area of Rectangle = " << recArea << endl;
                break;
            }
            case 51:
            {
                //'3' in decimal
                float triB, triH, triAr;
                cout << endl;
                cout << "What is the base of the triangle?" << endl;
                cin >> triB;
                cout << "What is the height of the triangle?" << endl;
                cin >> triH;
                triAr = (triB * triH) * 0.5;
                cout << "Area of triangle = " << triAr << endl;
                break;
            }
            case 52:
            {
                //'4' in decimal
                    cout<<"Quit"<<endl;
            }
            default:
            {
                    cout<<"Error please input a correct number 1-4?"<<endl;
            }
    }
    return 0;
}