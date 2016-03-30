/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 * Purpose: Mass and weight newtons
 * Created on March 29, 2016, 7:05 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    //declare variables
    float weight, mass;
    
    //ask for user input
    cout << "What is the objects mass in newtons?" << endl;
    cin >> mass;
    
    //calculate weight
    weight = mass * 9.8;
    
    //map results
    cout << "Object weighs " << weight << " Newtons" << endl;
    if(weight > 1000)
    {
        cout << "The object is to heavy. Object weighs" << weight << " Newtons" << endl;  
    }
    else if(weight < 10)
    {
        cout << "The object is to heavy. Object weighs" << weight << " Newtons" << endl;  
    }

    return 0;
}

