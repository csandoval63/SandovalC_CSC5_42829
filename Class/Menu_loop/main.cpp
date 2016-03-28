/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 *
 * Created on March 28, 2016, 9:43 AM
 */

#include <iostream>
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
        cout<<"Type 1 to solve problem 1"<<endl;
        cout<<"Type 2 to solve problem 2"<<endl;
        cout<<"Type 3 to solve problem 3"<<endl;
        cout<<"Type 3 to solve problem 4"<<endl;
        cout<<"Type 3 to solve problem 5"<<endl;
        cout<<"Type 3 to solve problem 6"<<endl;
        cout<<"Type 3 to solve problem 7"<<endl;
        cout<<"Type 3 to solve problem 8"<<endl;
        cout<<"Type 3 to solve problem 9"<<endl;
        cout<<"Type 3 to solve problem 10"<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        
        //Read the choice
        cin>>choice;
        
        //Solve a problem that has been chosen.
        switch(choice)
        {
                case 1:
                {
                    //Character '1' in Decimal
                    int sum=1+2+3+4+5+6+7+8+9+10;
                    cout<<endl;
                    cout<<"Solution to 1 sum(1->10)="<<sum<<endl;
                    cout<<endl;
                    break;
                }
                case 2:
                {
                    //Character '2' in Octal
                    int prod=1*2*3*4*5*6*7*8*9*10;
                    cout<<endl;
                    cout<<"Solution n!(1->10)="<<prod<<endl;
                    cout<<endl;
                    break;
                }
                case 3:
                {
                    //Character '3' in Hex
                    float quot=1.0f/2/3/4/5/6/7/8/9/10;
                    cout<<endl;
                    cout<<"Solution to 3 quot(1->10)="<<quot<<endl;
                    cout<<endl;
                    break;
                }
                case 4:
                {
                    cout<<"number 4"<<endl;
                    cout<<endl;
                    break;
                }
                case 5:
                {
                    cout<<"number 5"<<endl;
                    cout<<endl;
                    break;
                }
                case 6:
                {
                    cout<<"number 6"<<endl;
                    cout<<endl;
                    break;
                }
                case 7:
                {
                    cout<<"number 7"<<endl;
                    cout<<endl;
                    break;
                }
                case 8:
                {
                    cout<<"number 8"<<endl;
                    cout<<endl;
                    break;
                }
                case 9:
                {
                    cout<<"number 9"<<endl;
                    cout<<endl;
                    break;
                }
                case 10:
                {
                    cout<<"number 10"<<endl;
                    cout<<endl;
                    break;
                }
                default:
                {
                        cout<<"Exit?"<<endl;
                }
        };
    }
    while(choice<='10');
    
    //Exit stage right
    return 0;
}