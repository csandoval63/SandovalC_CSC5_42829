/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 *
 * Created on March 23, 2016, 10:30 AM
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv)
{
    //Declare variables
    float sScore;
    float pScore = 100;//perfect score of 100
    
    //Input values
    cout << "Input students score" << endl;
    cin >> sScore;
    
    //Map the inputs to the outputs
    //and
    //Output the results
    switch ((sScore <= pScore) && (sScore >= 90))
    {
        case true: cout << "You grade is an A" << endl;
        break;
        default:
            switch ((sScore <= 89.9) && (sScore >= 80))
            {
                case true: cout << "You grade is an B" << endl;
                    break;
            }
            switch ((sScore <= 79.9) && (sScore >= 70))
            {
                case true: cout << "You grade is an C" << endl;
                    break;
            }
            switch ((sScore <= 69.9) && (sScore >= 60))
            {
                case true: cout << "You grade is an D" << endl;
                    break;
            }
            switch ((sScore <= 59.9) && (sScore >= 0))
            {
                case true: cout << "You grade is an F" << endl;
                    break;
            }
            switch ((sScore >= pScore) || (sScore <= 0))
            {
                case true: cout << "Invalid Score!!\nPlease Input a number between 0 and 100" << endl;
                    break;
            }
    }
    
    return 0;
}