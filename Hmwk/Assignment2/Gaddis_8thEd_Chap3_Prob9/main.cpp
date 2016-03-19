/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: CHristian Sandoval
 *
 * Created on March 18, 2016, 10:30 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
    float tCook, cal(100), totalC;
    
    //Ask user how many cookeies were eaten 1 serving = 3 cookies, 1 serving = 300 calories
    cout << "How many cookies did you eat?" << endl;
    cin >> tCook; 
    
    //Calculates total calories eaten
    totalC = tCook * cal;

    //output results for total calories consumed
    cout << "Total Calories consumed were " << totalC << " calories." << endl;
    
    return 0;
}

