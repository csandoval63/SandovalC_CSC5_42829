/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 *
 * Created on April 06, 2016, 7:37pm
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv)
{
    //Declare the loop variable
    int choice;
    
    //General Menu Format
    do
    {
        //Display the selection
        cout<<"Type 1 to solve Gaddis_8thEd_Chap5_Prob1"<<endl;
        cout<<"Type 2 to solve Gaddis_8thEd_Chap5_Prob2"<<endl;
        cout<<"Type 3 to solve Gaddis_8thEd_Chap5_Prob3"<<endl;
        cout<<"Type 3 to solve Gaddis_8thEd_Chap5_Prob4"<<endl;
        cout<<"Type 3 to solve Gaddis_8thEd_Chap5_Prob5"<<endl;
        cout<<"Type 3 to solve Gaddis_8thEd_Chap5_Prob6"<<endl;
        cout<<"Type 3 to solve Gaddis_8thEd_Chap5_Prob20"<<endl;
        cout<<"Type 3 to solve Gaddis_8thEd_Chap5_Prob21"<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        
        //Read the choice
        cin>>choice;
        
        //Solve a problem that has been chosen.
        switch(choice)
        {
                case 1:
                {
                    //Character '1' in Decimal
                    //Declare variables
                    int var, bVars, sum;
    
                    //Ask user input
                    cout << "Please input a positive value" << endl;
                    cin >> var;
    
                    //Map functions and results
                    if(var <= 50 && var >=1)
                    {
                        cout << "All variables before " << var << ": " << endl;
                        for(bVars = 1, sum = 0; bVars <= var; bVars++ )
                        {
                            sum += bVars;
                            cout << "variables: " << bVars << endl;
                        }
                    cout << "Sum of variables + " << var << " = " << sum << endl;
                    }
                    else if(var < 0) 
                    {
                        cout << "Please input a positive value" << endl;
                    }
                    else if(var > 50 || var < 1) 
                    {
                        cout << "Please input a number between 1 and 50" << endl;
                    }
                    cout << endl;
                    break;
                }
                case 2:
                {
                    //Character '2' in Octal
                     int ascii;
    
                     //output results/loop
                    for(ascii = 0; ascii <= 177;)
                    {
                    cout << char(ascii++) << char(ascii++) << char(ascii++) << char(ascii++) 
                        << char(ascii++) << char(ascii++) << char(ascii++) << char(ascii++) 
                        << char(ascii++) << char(ascii++) << char(ascii++) << char(ascii++) 
                        << char(ascii++) << char(ascii++) << char(ascii++) << char(ascii++) 
                        << endl;
                    }
                    cout<<endl;
                    break;
                }
                case 3:
                {
                    //Character '3' in Hex
                    //Declare variables
                    float oRisng, sumOyrs, years;

                    cout << "Ocean level over span of 25 years will rise: " << endl;

                    //output and map results
                    for(years = 1, oRisng = 1.5; years <= 25; years++ )
                    {
                        sumOyrs = oRisng * years;
                        cout << "Year: " << years << " Ocean level risen by " << sumOyrs << "mm"<< endl;
                    }
                    cout << "At 25 years ocean will have risen by: " << sumOyrs << "mm" << endl;
                    
                    cout<<endl;
                    break;
                }
                case 4:
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
                    cout << endl;
                    
                    break;
                }
                case 5:
                {
                    //Declare variables
                    float memfee, total, years;

                    cout << "Membership cost over span of 6 years raised by 4% " << endl;

                    //map output and results...
                    for(years = 0, memfee = 2400; years <= 5; )
                    {
                        years ++;
                        total += memfee + (memfee * .04) ;
                        cout << "Year: " << years << " membership cost will be $" << total << endl;
                    }
                    cout << "In " << years << " years membership total cost will be $" << total << endl;
                    
                    cout << endl;
                    break;
                }
                case 6:
                {
                    float mph, dist, time, cTime;//cDist = count distance, cTime = count time

                    //inputs
                    cout << "What is the speed of the vehicle in mph?" << endl;
                    cin >> mph;
                    cout << "How many hours has it traveled?" << endl;
                    cin >> time;
    
                    cout << "Hour(s):"<< setw(20) << "Distance:" << endl;
                    cout << "----------------------------" << endl;
                    
                    //map results and functions
                    for(cTime = 1; cTime <= time; cTime++ )
                    {
                        dist = mph*cTime;
                        cout << cTime << setw(23) << dist << endl;
                    }
                    
                    cout << endl;
                    
                    break;
                }
                case 7:
                {
                    //Declare variables
                    const int MIN_VALUE = 1, MAX_VALUE = 50;//Sets constant min value and max to give student workable problems
   
                    int ranNum, guess;
    
                    //seed time need for random values within max and min values
                    unsigned seed = time(0);
                    srand(seed);
    
                    //FUnctions carried out
                    ranNum = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    
                    //Outputs for student
                    cout << "Guess a number between 1 and 50" << endl;
                    cin >> guess;
    
                    //Map outputs and results
                    do
                    {
                    if(guess != ranNum)
                    {
                         cout << "Guess again, Your guess was " << guess << endl;
                         cin >> guess;
                    }
                    }
                    while(guess < ranNum || guess > ranNum);
    
                    if(guess == ranNum)
                    {
                        cout << "Congrats You win correct guess was " << ranNum << endl;
                    }
                        cout << endl;
                    break;
                }
                case 8:
                {
                    //Declare variables
                    const int MIN_VALUE = 1, MAX_VALUE = 50;//Sets constant min value and max to give student workable problems
   
                    int ranNum, guess, numGus = 0;
    
                    //seed time need for random values within max and min values
                    unsigned seed = time(0);
                    srand(seed);
    
                    //FUnctions carried out
                    ranNum = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    
                    //Outputs for student
                    cout << "Guess a number between 1 and 50" << endl;
                    cin >> guess;
    
                    //Map outputs and results
                    do
                    {
                        if(guess != ranNum)
                        {
                            numGus++;
                            cout << "Guess again, Your guess was " << guess << "\nGuess #" << numGus << endl;
                            cin >> guess;
                        }
                    }
                    while(guess < ranNum || guess > ranNum);
                    
                    if(guess == ranNum)
                    {
                        numGus++;
                        cout << "Congrats You win correct guess was " << ranNum
                        << "\nCorrect on guess #" << numGus << endl;
                    }
                    cout << endl;
                    
                    break;
                }
                default:
                {
                        cout<<"Exit?"<<endl;
                }
        };
    }
    while(choice <= 8 );
    
    //Exit stage right
    return 0;
}