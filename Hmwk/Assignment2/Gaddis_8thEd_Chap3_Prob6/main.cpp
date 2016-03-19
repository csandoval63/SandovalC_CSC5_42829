/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 *
 * Created on March 18, 2016, 8:40 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
    //declare variables
    float cupBut(.0283333333), cupSug(.03125), cupFlur(.05729166667), numCook;
    
    //Output to user
    cout << "How many cookies would you like to make?" <<endl;
    //Input made by user
    cin >> numCook;
    
    //Calculates amount of each ingredient
    cupBut = cupBut * numCook;
    cupSug = cupSug * numCook;
    cupFlur = cupFlur * numCook;
    
    //Output to user for amount of each ingredients(precision set to be the same as book) 
    cout << "Cups of Butter: " << setprecision(1) << cupBut << endl;
    cout << "Cups of Sugar: " << setprecision(2) << cupSug << endl;
    cout << "Cups of Flour: " << setprecision(3) << cupFlur << endl;
    

    return 0;
}

//.03125 = cups of sugar
//(1/48)= cups of butter
// (11/192)