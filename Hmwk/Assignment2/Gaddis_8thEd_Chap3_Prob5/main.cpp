/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mrgig
 *
 * Created on March 18, 2016, 10:20 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
    float males, female, totalR, percM, percF;
    
    //Ask user total registered students
    cout << "How many total students are registered?" << endl;
    cin >> totalR; 
    
    //Ask user total registered males
    cout << "How many male students are registered?" << endl;
    cin >> males;
    
    //Ask user total registered females
    cout << "How many female students are registered?" << endl;
    cin >> female;
    
    //Calculates percentage for males and females by divinding total number of registered students
    percM = (males / totalR)*100;//males
    percF = (female / totalR)*100;//females

    //output results for percentage of males and females
    cout << "Percentage of Males registered is " << percM << "%\n" << "Percentage of Females registered is " << percF << "%" <<endl;
    
    return 0;
}

