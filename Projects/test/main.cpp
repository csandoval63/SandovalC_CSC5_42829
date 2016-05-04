/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 * Created on April 27, 2016, 8:05 AM
 * Purpose:  Pokemon Battle/Dragons Simulation
 * Check list at bottom...
 */

//System Libraries

#include <iostream>//I/O
#include <cstdlib> //Rand and Set Random
#include <ctime>   //Utilize time to set the seed
#include <fstream> //Writing to a file
#include <iomanip> //Formatting output
#include <unistd.h>//used to pause time so that random seed generator can differ between pc and player

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
unsigned short accnum(unsigned short);
void dragchoi();
void comDrag();
void accnum();
void hitsuc();
//Attacks Menus
void attks();
void comattk();
//Basic attacks
//void punch();
//Health system test
void filePhp();

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
    do
    {
    cin >> draCho;
        switch(draCho)
        {
            case 1:
            {
                cout<<endl;
                cout<<"Thank you for choosing the Fire dragon" <<endl;
        //        dragHH();//player's dragon health
                //test hit success rate for attack patterns later add 2 or more attacks for fun
                //computer picks randomly
                comDrag();
                attks();
                cout<<endl;
                break;
            }
            case 2:
            {
                cout<<endl;
                cout<<"Thank you for choosing the Water dragon" <<endl;
          //      dragHH();//player's dragon health
                //test hit success rate for attack patterns later add 2 or more attacks for fun
                //computer picks randomly
                comDrag();
                attks();
                cout<<endl;
                break;
            }
            case 3:
            {
                cout<<endl;
                cout<<"Thank you for choosing the Grass dragon" <<endl;
           //     dragHH();//player's dragon health
                //test hit success rate for attack patterns later add 2 or more attacks for fun
                //computer picks randomly
                comDrag();
                attks();
                cout<<endl;
                break;
            }
            case 4:
            {
                cout<<endl;
                cout<<"Thank you for choosing the Rock dragon" <<endl;
           //     dragHH();//player's dragon health
                //test hit success rate for attack patterns later add 2 or more attacks for fun
                //computer picks randomly
                comDrag();
                attks();
                cout<<endl;
                break;
            }
            default:
            {
                cout<<"Please input proper choice" <<endl;
            }
        }
    }
        while(draCho < 5);
}

void comDrag()
{
    const int MIN_VALUE = 0, MAX_VALUE = 4;//Sets constant min value and max to give student workable problems
    int cmDrag;
    
    //seed time need for random values within max and min values
    unsigned seed = time(0);
    srand(seed);
    cmDrag = (rand() % (MAX_VALUE - MIN_VALUE + 1)) +MIN_VALUE;
    switch(cmDrag)
    {
        case 1:
        {
            cout<<endl;
            cout<<"Computer chose Fire dragon" <<endl;
    //        dragHH();//player's dragon health
            cout<<endl;
            break;
        }
        case 2:
        {
            cout<<endl;
            cout<<"Computer chose Water dragon" <<endl;
      //      dragHH();//player's dragon health
            cout<<endl;
            break;
        }
        case 3:
        {
            cout<<endl;
            cout<<"Computer chose  Grass dragon" <<endl;
       //     dragHH();//player's dragon health
            cout<<endl;
            break;
        }
        case 4:
        {
            cout<<endl;
            cout<<"Computer chose  Rock dragon" <<endl;
       //     dragHH();//player's dragon health
            cout<<endl;
            break;
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
    //accuracy
    bool damage;
    if (acc < 45 )
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

//************Attack menu's******************
void attks()
{
    int attk;
    
    cout << "--------Attack Menu--------\n"
            "Press 1 for Elemental Attack.\n"
            "Press 2 for Kick.\n"
            "Press 3 for Bite.\n"
            "Press 4 for Punch." << endl;
    do
    {
        cin >> attk;
        switch(attk)
        {
            case 1:
            {
                cout<<endl;
                cout<<"Thank you for choosing "<< attk << " attack" <<endl;
                hitsuc();
                filePhp();
                cout<<"Computer is deciding on attack" <<endl;
                sleep(1);
                comattk();
                cout<<endl;
                break;
            }
            case 2:
            {
                cout<<endl;
                cout<<"Thank you for choosing " << attk << " dragon" <<endl;
                hitsuc();
                cout<<"Computer is deciding on attack" <<endl;
                sleep(1);
                comattk();
                cout<<endl;
            }
            case 3:
            {
                cout<<endl;
                cout<<"Thank you for choosing "<< attk << " attack" <<endl;
                hitsuc();
                cout<<"Computer is deciding on attack" <<endl;
                sleep(1);
                comattk();
                cout<<endl;
                break;
            }
            case 4:
            {
                cout<<endl;
                cout<<"Thank you for choosing "<< attk << " attack" <<endl;
                hitsuc();
                cout<<"Computer is deciding on attack" <<endl;
                sleep(1);
                comattk();
                cout<<endl;
                break;
            }
            default:
            {
                cout<<"Please input proper choice for attack"<<endl;
            }
        }
    }
        while(attk < 5);
}

//************Computer Attack******************
void comattk()
{
    const int MIN_VALUE = 0, MAX_VALUE = 3;//Sets constant min value and max to give student workable problems
    int cmattk;
    
    //seed time need for random values within max and min values
    unsigned seed = time(0);
    srand(seed);
    
    cmattk = (rand() % (MAX_VALUE - MIN_VALUE + 1)) +MIN_VALUE;
    
    switch(cmattk)
    {
        case 1:
        {
            cout<<endl;
            cout<<"Computer chose Elemental attack" <<endl;
            //test hit success rate for attack patterns later add 2 or more attacks for fun
            hitsuc();
            attks();
            cout<<endl;
            break;
        }
        case 2:
        {
            cout<<endl;
            cout<<"Computer chose Kick dragon" <<endl;
            //test hit success rate for attack patterns later add 2 or more attacks for fun
            hitsuc();
            attks();
            cout<<endl;
            break;
        }
        case 3:
        {
            cout<<endl;
            cout<<"Computer chose Bite attack" <<endl;
            //test hit success rate for attack patterns later add 2 or more attacks for fun
            hitsuc();
            attks();
            cout<<endl;
            break;
        }
        case 4:
        {
            cout<<endl;
            cout<<"Computer chose Punch attack" <<endl;
            //test hit success rate for attack patterns later add 2 or more attacks for fun
            hitsuc();
            attks();
            cout<<endl;
            break;
        }
    }
}

//test
void filePhp()
{
    //Declare variables
    int curPhp;
    
    ofstream outhp;//Output / out used can be anything but its used for file
    ifstream inhp;//Input /used for reading files
    
    //read info from a file
    inhp.open("plyrHp.dat");
    inhp >> curPhp;
    inhp.close();
    cout << "Current HP: " << curPhp << endl;
    cout << curPhp << ">";
    curPhp = curPhp - 12;
    cout <<curPhp<<endl;
    outhp.open("plyrHp.dat");
    outhp << curPhp;
    outhp.close();
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
 * Damage system/Health
 * Attack Menu
 */