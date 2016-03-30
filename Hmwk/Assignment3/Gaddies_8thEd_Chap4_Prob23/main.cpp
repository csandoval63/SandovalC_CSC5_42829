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
            case 1:
            {
                const int PI = 	3.14159265358979323846;
                float cirR, cirAr;
                cout << endl;
                cout << "What is the radius of the circle?" << endl;
                cout << endl;
                cin >> cirR;
                cout << endl;
                cirAr = pow(PI*cirR, 2);
                cout << endl;
                break;
            }
            case 2:
            {
                int prod=1*2*3*4*5*6*7*8*9*10;
                cout<<endl;
                cout<<"Solution n!(1->10)="<<prod<<endl;
                cout<<endl;
                break;
            }
            case 3:
            {
                float quot=1.0f/2/3/4/5/6/7/8/9/10;
                cout<<endl;
                cout<<"Solution to 3 quot(1->10)="<<quot<<endl;
                cout<<endl;
                break;
            }
            default:
            {
                    cout<<"Exit?"<<endl;
            };
    }
    return 0;
}