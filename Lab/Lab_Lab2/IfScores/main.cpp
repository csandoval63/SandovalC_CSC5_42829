/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 *
 * Created on March 23, 2016, 10:03 AM
 */

#include <cstdlib>
#include <iostream>

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
    if ((sScore >= 90) && (sScore <= pScore))
    {
       cout << "Students score is a A" << endl;
    }
    else if ((sScore <= 89.9) && (sScore >= 80))
    {
       cout << "Students score is a B" << endl;
    }
    if ((sScore <= 79.9) && (sScore >= 70))
    {
       cout << "Students score is a C" << endl;
    }
    if ((sScore <= 69.9) && (sScore >= 60))
    {
       cout << "Students score is a D" << endl;
    }
    if ((sScore <= 59.9) && (sScore >= 0))
    {
       cout << "Students score is a F" << endl;
    }
    if ((sScore >= pScore) || (sScore <= 0))
    {
        cout << "Invalid Score Inputed!!!!\nPlease input a score between 0 and 100" << endl;
    }
    
    return 0;
}