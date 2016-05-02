/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 * Created on April 27, 2016, 8:05 AM
 * Purpose:  Using Random numbers, check out stats of dice throwing
 * Check list at bottom...
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
unsigned short accnum(unsigned short);
void dragchoi();
void accnum();
void hitsuc();
//Health
//void dragHH();
//void dragCH();

//Note to self The & is used as referencing to link it back to for example the health
//also move this to bottom when done due to this being an example for reference use
void testHp(int &hHp)
{
    hHp = hHp - 50;
}

//Execution Begins Here!
int main(int argc, char** argv) 
{
    //Declare variables
    
    //Test for the health/damage
    int hHp = 100;
    cout << "Health Before: " <<  hHp << endl;
    testHp(hHp);
    cout << "Health After: " << hHp << endl;
    
    //Title
    cout << "Prepare to battle choose your 1 dragon wisely!\n"
            "There is Dragon Elemental weaknesses which is multiplied by 1.5\n\n"
            "--------Dragon Choice Menu--------\n"
            "Press 1 for Fire element Dragon.\n"
            "Press 2 for Water element Dragon.\n"
            "Press 3 for Grass element Dragon.\n"
            "Press 4 for Rock element Dragon." << endl;
    
    //ask user for choice/bring up menu
    dragchoi();
    //Dragon health Computer health
    //  dragCH();

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
            cout<<endl;
            cout<<"Thank you for choosing "<< draCho << " dragon" <<endl;
    //        dragHH();//player's dragon health
            //test hit success rate for attack patterns later add 2 or more attacks for fun
            hitsuc();
            cout<<endl;
            break;
        }
        case 2:
        {
            cout<<endl;
            cout<<"Thank you for choosing " << draCho << " dragon" <<endl;
      //      dragHH();//player's dragon health
            //test hit success rate for attack patterns later add 2 or more attacks for fun
            hitsuc();
            cout<<endl;
            break;
        }
        case 3:
        {
            cout<<endl;
            cout<<"Thank you for choosing "<< draCho << " dragon" <<endl;
       //     dragHH();//player's dragon health
            //test hit success rate for attack patterns later add 2 or more attacks for fun
            hitsuc();
            cout<<endl;
            break;
        }
        case 4:
        {
            cout<<endl;
            cout<<"Thank you for choosing "<< draCho << " dragon" <<endl;
       //     dragHH();//player's dragon health
            //test hit success rate for attack patterns later add 2 or more attacks for fun
            hitsuc();
            cout<<endl;
            break;
        }
        default:
        {
            cout<<"Make a loop so it ask for user input again?"<<endl;
        }
    }
}


/////Attack patterns for hits and misses

void hitsuc()
{
    //Random number generator
    unsigned short acc;  //attack success is 55+ max value assigned has been 100
        
    //random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //get value of accuracy if number is greater than 55 than hit is a success..
    acc = accnum (acc);
    cout << acc << endl;
    bool damage;
    if (acc < 55 )
    {
        cout << "Miss" << endl;
        damage = false;
        cout << damage << endl;
    }
    else if (acc >= 55 )
    {
        cout << "Hit" << endl;
        damage = true;
        cout << damage << endl;
    }
}

//Random number generator with 2 or 1
unsigned short accnum(unsigned short acc)
{
    const int MIN_VALUE = 0, MAX_VALUE = 100;//Sets constant min value and max to give student workable problems
    acc = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    
    //return value of acc
    return acc;
}

/* 
 * ***Check List***
 * Accuracy Done
 * Player dragon choice
 */

/* 
 * ***To-do List***
 * Link Accuracy to attacks
 * Weakness system
 * Random computer dragon choice...
 * Damage system/Health
 * Attack Menu
 * Computer random attack menu
 * Attack differation depending on dragon selected...
 */