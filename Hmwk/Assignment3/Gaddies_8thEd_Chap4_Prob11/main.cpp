/*
 * File:   main.cpp
 * Author: Christian Sandoval
 * Purpose Math tutor
 * Created on March 28, 2016, 8:55 PM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char** argv)
{
    const int MIN_VALUE = 0, MAX_VALUE = 1000;//Sets constant min value and max to give student workable problems
    
    int val1, val2, sum, ansS;//starts values/sum
    
    //seed time need for random values within max and min values
    unsigned seed = time(0);
    srand(seed);
    
    
    //FUnctions carried out
    val1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) +MIN_VALUE;
    val2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) +MIN_VALUE;
    sum = val1 + val2;
    
    //Outputs for student
    cout << " " << val1 << "\n+" << val2 <<endl;
    cout << "----- Please your input answer" <<endl;
    cin >> ansS;
    
    //map out results
    if(sum == ansS)
    {
        cout << "Congrats you solved it correctly with your answer " << ansS << endl;
    }
    if(sum != ansS)
    {
        cout << "Your answer " << ansS << " was incorrect, the correct answer was " << sum << endl;
    }
    
    return 0;
}

