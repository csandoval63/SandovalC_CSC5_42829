/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 *
 * Created on April 4, 2016, 8:16 AM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void menu();
void prob1();
void prob2();
void prob3();

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
                default:
                {
                        cout<<"Exit?"<<endl;
                }
        };
    }
    while(choice <= 3);
    
    //Exit stage right
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

/*                              Menu
 *Inputs
 *   None
 *Outputs
 *    None
 */

void menu()
{
    
        cout<<"Type 1 to solve problem 1"<<endl;
        cout<<"Type 2 to solve problem 2"<<endl;
        cout<<"Type 3 to solve problem 3"<<endl;
        cout<<"Type any other number to quit.(NUMBER!!!)"<<endl;     
}

/*                              Problem 1
 * Inputs
 *   None
 *Outputs
 *    None
 */

void prob1()
{
    int sum=1+2+3+4+5+6+7+8+9+10;
    cout<<endl;
    cout<<"Solution to 1 sum(1->10)="<<sum<<endl;
    cout<<endl;  
}

/*                              Problem 2
 *Inputs
 *   None
 *Outputs
 *    None
 */

void prob2()
{
    int prod=1*2*3*4*5*6*7*8*9*10;
    cout<<endl;
    cout<<"Solution n!(1->10)="<<prod<<endl;
    cout<<endl;
}

/*                              Problem 3
 *Inputs
 *   None
 *Outputs
 *    None
 */

void prob3()
{
    float quot=1.0f/2/3/4/5/6/7/8/9/10;
    cout<<endl;
    cout<<"Solution to 3 quot(1->10)="<<quot<<endl;
    cout<<endl;
}