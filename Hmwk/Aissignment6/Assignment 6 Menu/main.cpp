/* 
 * File:   main.cpp
 * Author: mrgig
 *
 * Created on May 18, 2016, 11:37 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <fstream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void menu();
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob10();
void prntAry(char[], int , int);
int rdFile(char [], char[]);//file name is a character array
int score(char [], int , char [], int);

//Execution Begins Here

int main(int argc, char** argv)
{
    //Declare the loop variable
    int choice;
    
    //General Menu Format
    do
    {
        //Display the selection
        menu();
        
        //Read the choice
        cin>>choice;
        
        //Solve a problem that has been chosen.
        switch(choice)
        {
                case 1:
                {
                    prob1();
                    break;
                }
                case 2:
                {
                    prob2();
                    break;
                }
                case 3:
                {
                    prob3();
                    break;
                }
                case 4:
                {
                    prob4();
                    break;
                }
                case 5:
                {
                    prob5();
                    break;
                }
                case 10:
                {
                    prob10();
                    break;
                }
                default:
                {
                        cout<<"Exit?"<<endl;
                }
        };
    }
    while(choice <= 5 || choice == 10);
    
    //Exit stage right
    return 0;
}

void menu()
{
    
        cout<<"Type 1 to solve problem 1"<<endl;
        cout<<"Type 2 to solve problem 2"<<endl;
        cout<<"Type 3 to solve problem 3"<<endl;
        cout<<"Type 4 to solve problem 4"<<endl;
        cout<<"Type 5 to solve problem 5"<<endl;
        cout<<"Type 10 to solve problem 10"<<endl;
        cout<<"Type any other number to quit.(NUMBER!!!)"<<endl;     
}

void prob1()
{
   //declare variables
    const int NUMBER = 11;//set to 11 to get the correct cout value when asking for value
    int uInput[NUMBER], bigNum, smalNum;
    
    // gets values from user 
    for(int i = 1; i < NUMBER; i++)
    {
        cout << "Enter #" << i << " Value: ";
        cin >> uInput[i];
    }
    //finds the smallest value of inputs
    smalNum = uInput[1];
    for(int counter = 1; counter < NUMBER; counter++)
    {
        if (uInput[counter]<smalNum)
        {
            smalNum = uInput[counter];
        }
    }
    // find the biggest value of inputs
    bigNum = uInput[1];
    for(int counter = 1; counter < NUMBER; counter++)
    {
        if ( uInput[counter] > bigNum)
        {
            bigNum = uInput[counter];
        }
    }
    //displays max and min value
    cout << "\nLargest Number: " << bigNum << "\n"
            "Smallest Number: " << smalNum << "\n" << endl;
}

void prob2()
{
   //declare variables
    const int NUMBER = 13;//set to 13 to get the correct cout value when asking for value
    float uInput[NUMBER], bigNum, smalNum, total(0), averge(0);
    
    // gets values from user 
    for(int i = 1; i < NUMBER;)
    {
        cout << "Enter Month #" << i << " rain amount: ";
        cin >> uInput[i];
        if(uInput[i] >= 0)
        {
            i++;
        }
        else
        {
            cout << "\nPLeaseEnter correct value for Month #" << i << "\n";
        }
    }
    //finds the smallest value of inputs
    smalNum = uInput[1];
    for(int counter = 1; counter < NUMBER; counter++)
    {
        if (uInput[counter]<smalNum)
        {
            smalNum = uInput[counter];
        }
    }
    // find the biggest value of inputs
    bigNum = uInput[1];
    for(int counter = 1; counter < NUMBER; counter++)
    {
        if ( uInput[counter] > bigNum)
        {
            bigNum = uInput[counter];
        }
    }
    //finds the total amount of rainfall
    for(int counter; counter < NUMBER; counter++)
    {
        total += uInput[counter];
    }
    //finds the average rainfall ammount 
    averge = (total / NUMBER);
    
    //displays max and min value
    cout << "\nLargest Amount of rain fall: " << bigNum << "in\n"
            "Smallest Amount of rain fall: " << smalNum << "in\n"
            "Average rain fall amount: " << averge << "in\n"
            "Total Rainfall: "<< total << "in" << endl;
}

void prob3()
{
   //declare variables
    const int TYPES=5;
    string salsas[TYPES], minSal, maxSal; //salsas, min sales salsa, max sales salsa
    int sales[TYPES], total, bigNum, smalNum;       //sales of each salsa
    salsas[0]="mild";
    salsas[1]="medium";
    salsas[2]="sweet";
    salsas[3]="hot";
    salsas[4]="zesty";
    
    // gets values from user 
    for(int i = 0; i < TYPES;)
    {
        cout << "How many " << salsas[i] << " spice salsas were sold?\n";
        cin >> sales[i];
        if(sales[i] >= 0)
        {
            i++;
        }
        else
        {
            cout << "\nPlease Enter correct value of salsas sold" << i << endl;
        }
    }
    //finds the smallest value of inputs
    smalNum = sales[0];
    minSal = salsas[0];
    for(int counter = 1; counter < TYPES; counter++)
    {
        if (sales[counter]<smalNum)
        {
            smalNum = sales[counter];
            minSal= salsas[counter];
        }
    }
    // find the biggest value of inputs
    bigNum = sales[0];
    maxSal = salsas[0];
    for(int counter = 1; counter < TYPES; counter++)
    {
        if ( sales[counter] > bigNum)
        {
            bigNum = sales[counter];
            maxSal = salsas[counter];
        }
    }
    //finds the total amount of rainfall
    for(int counter; counter < TYPES; counter++)
    {
        total += sales[counter];
    }
    
    //results
    for (int counter = 0; counter < TYPES; counter++)
    {
        cout << "You sold " << sales[counter] << " jars of " 
             << salsas[counter] << " Salsa." << endl;
    }
    cout << "\nMost Sold Salsa: " << maxSal << "\n"
            "Least Sold Salsa: " << minSal << "\n"
            "Total Sold: "<< total << endl;
}

void prob4()
{
    int SIZE, larger[SIZE], array[SIZE], num;//size of array, the letter n,larger array is the  numbers larger than n
    
    //Asks user for array size
    cout <<"what is the size of the array?"<<endl;
    cin >> SIZE;
    
    cout << "Please input the integers of the array." << endl;
    
    for (int counter=0; counter < SIZE; counter++)
    {
        cout << "Integer ["<< counter + 1 << "]: ";
        cin >> array[counter];   
    }
    
    cout <<"Pick a number for n." << endl;
    cin >> num;
    
    cout <<"Numbers that are greater than " << num << "are: ";
    for (int counter=0; counter < SIZE; counter++)
    {
        if (num < array[counter])
        {
            cout << array[counter]<<", ";
        }
    }
    cout << endl;
}

void prob5()
{
    const int MONKEYS = 3, DAYS = 5;
    int monkAte[MONKEYS][DAYS], least, most;
    float total=0, average=0;
    
    for(int i = 0; i < DAYS;)
    {
        cout << "How many pounds of food did monkey 1 get on day "<< i+1 <<"?"<<endl;
        cin >>monkAte[0][i];
        
        if(monkAte[0][i] >= 0)
        {
            i++;
        }
        else
        {
            cout << "\nPLeaseEnter correct value for food eaten by monkey" << i << "\n";
        }
    }
    
    for(int i = 0; i < DAYS;)
    {
        cout << "How many pounds of food did monkey 2 get on day "<< i+1 <<"?"<<endl;
        cin >>monkAte[1][i];
        
        if(monkAte[1][i] >= 0)
        {
            i++;
        }
        else
        {
            cout << "\nPLeaseEnter correct value for food eaten by monkey" << i << "\n";
        }
    }
    
    for(int i = 0; i < DAYS;)
    {
        cout << "How many pounds of food did monkey 3 get on day "<< i+1 <<"?"<<endl;
        cin >> monkAte[2][i];
        
        if(monkAte[2][i] >= 0)
        {
            i++;
        }
        else
        {
            cout << "\nPLeaseEnter correct value for food eaten by monkey " << i << "\n";
        }
    }
    
    for (int i = 0; i < DAYS; i++)
    {
        total += monkAte[0][i];
        total += monkAte[1][i];
        total += monkAte[2][i];
    }
    
    //finds average
    average = total/(MONKEYS*DAYS);
    
    //finds the least 
    least = monkAte[0][0];
    for (int i = 1; i < DAYS; i++)
    {
        if (monkAte[0][i] < least)
        {
            least = monkAte[0][i];
        }
    }
    for (int i = 1; i < DAYS; i++)
    {
        if (monkAte[1][i] < least)
        {
            least = monkAte [1][i];
        }
    } 
    for (int i = 1; i < DAYS; i++)
    {
        if (monkAte[2][i] < least)
        {
            least = monkAte[2][i];
        }
    } 
    
        //finds the least 
    most = monkAte[0][0];
    for (int i = 1; i < DAYS; i++)
    {
        if (monkAte[0][i] > most)
        {
            most = monkAte[0][i];}
    }
    for (int i = 1; i < DAYS; i++)
    {
        if (monkAte[1][i] > most)
        {
            most = monkAte[1][i];
        }
    } 
    for (int i = 1; i < DAYS; i++)
    {
        if (monkAte[2][i] > most)
        {
            most=monkAte[2][i];
        }
    } 
    
    cout << "Your monkeys have eaten at an average of " << average << " lbs."
            " a day.\n The least amount your monkeys have eaten "
            "in one day was " << least << " lbs.\n The greatest amount your "
            "monkeys have eaten in one day has been " << most << " lbs." << endl;
}

void prob10()
{
    //Declare variables
    const int SIZE = 100;
    char answers[SIZE];
    char user[SIZE];

    //Open the files
    char fnAns[]="AnswerKey.dat";
    int nAnswers=rdFile(fnAns,answers);
    char fnUsr[]="UserAnswers.dat";
    int nUser=rdFile(fnUsr,user);
    
    //Print the arrays
    cout<<"The Answer Key"<<endl;
    prntAry(answers,nAnswers,10);
    cout<<"The Users Answers"<<endl;
    prntAry(user,nUser,10);
    
    //calculate the results
    int results=score(answers,nAnswers,user,nUser);
    cout<<"Score = "<<results<<" right -> "
            <<1.0f*results/nAnswers*100<<"%"<<endl;
    
    //Exit stage right
}

int score(char answers[], int nAnswers, char user[], int nUser)
{
    //Calculate the results
    int results=0;
    for(int ques=0;ques<nAnswers&&ques<nUser;ques++)
    {
        if(answers[ques]==user[ques])results++;
    }
    return results;
}

void prntAry(char a[], int nInA, int  perLine)
{
    cout<<endl;
    for(int i=0;i<nInA;i++)
    {
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

               //file name //data     //
int rdFile(char fn[], char dat[])
{
    //Declare variables
    ifstream ansKey;//input

    //Open the file
    ansKey.open(fn);
    
    //Read from the file
    int n = 0;
    while(ansKey >> dat[n])
    {
          n ++;
    }
    
    //close file
    ansKey.close();
    
    //return the size
    return n;
}