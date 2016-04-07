/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 * Purpose Calories burned
 * Created on April 3, 2016, 9:38 PM
 */

//system libraries
#include <cstdlib>
#include <iostream>

using namespace std;


int main(int argc, char** argv)
{
    //Declare variables
    float calspm, calsum, mins;

    cout << "Calories burned over span of 30 mins on a treadmill: " << endl;

    //output and map results
    for(mins = 0, calspm = 3.6; mins <= 25; )
    {
        mins += 5;
        calsum = calspm * mins;
        cout << "Minutes: " << mins << " Calories burned " << calsum << " burned"<< endl;
    }

    cout << "In " << mins << " mins on a treadmill: " << calsum << " burned" << endl;

    return 5;
}