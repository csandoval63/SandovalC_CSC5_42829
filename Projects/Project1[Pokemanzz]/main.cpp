/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 * Created on April 27, 2016, 8:05 AM
 * Purpose:  Using Random numbers, check out stats of dice throwing
 */

//System Libraries

#include <iostream>//I/O
#include <cstdlib> //Rand and Set Random
#include <ctime>   //Utilize time to set the seed
#include <fstream> //Writing to a file
#include <iomanip> //Formatting output
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void dragchoi();

//Execution Begins Here!
int main(int argc, char** argv) 
{
    //Declare variables
    //Title
    cout << "Prepare to battle choose you dragon wisely!" << endl;
    cout << "Press 1 for Fire element Dragon" << endl;
    cout << "Press 2 for Water element Dragon" << endl;
    cout << "Press 3 for Grass element Dragon" << endl;
    cout << "Press 4 for Rock element Dragon" << endl;
    
    //ask user for choice/bring up menu
    dragchoi();
    
    return 0;
}

void dragchoi()
{
    int draCho;
    cin >> draCho;
    
    switch(draCho)
    {
        case 1:
        {
            //Character '1' in Decimal
            cout<<endl;
            cout<<"Thank you for choosing "<< draCho << " dragon" <<endl;
            cout<<endl;
            break;
        }
        case 2:
        {
            //Character '2' in Octal
            cout<<endl;
            cout<<"Thank you for choosing " << draCho << " dragon" <<endl;
            cout<<endl;
            break;
        }
        case 3:
        {
            //Character '3' in Hex
            cout<<endl;
            cout<<"Thank you for choosing "<< draCho << " dragon" <<endl;
            cout<<endl;
            break;
        }
        case 4:
        {
            //Character '3' in Hex
            cout<<endl;
            cout<<"Thank you for choosing "<< draCho << " dragon" <<endl;
            cout<<endl;
            break;
        }
        default:
        {
            cout<<"Make a loop so it ask for user input again?"<<endl;
        }
    }
}

//https://blockchain.info/