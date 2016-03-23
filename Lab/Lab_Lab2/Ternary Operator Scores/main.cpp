/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 23, 2016, 9:33 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    //Declare Variables
    float sScore, lGrade;
    float pScore = 100;//Perfect score
    
    //Inpute values
    
    cout << "Input students points score on test worth 100" << endl;
    cin >> sScore;
    
    //Map the inputs to the out puts
    lGrade = ((sScore <= pScore) && (sScore >= 90)))    ?0: cout << "Your Score is an A" << endl;
             ((sScore <= 89.9) && (sScore >= 80)))       ?: cout << "Your Score is an B" << endl;
             ((sScore <= 79.9) && (sScore >= 70)))       ?: cout << "Your Score is an C" << endl;
             ((sScore <= 69.9) && (sScore >= 60)))       ?: cout << "Your Score is an D" << endl;
             ((sScore <= 59.9) && (sScore >= 0)))        ?: cout << "Your Score is an F" << endl;
             ((sScore <= pScore) || (sScore >= 0)))      ?: cout << "Invalid Score please input an number btween 0 and 100" << endl :0;
                 
            
    return 0;
}

