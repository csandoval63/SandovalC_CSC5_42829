/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 16, 2016, 10:06 Am
 * Utilize if, if-else if, switch, ternary
 */

#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char** argv)
{
    const int SIZE = 40;
    char firstN[SIZE], secondN[SIZE], thirdN[SIZE];
    
    //Get Strings/ ask user for names
    cout << "Program will alphabetize names " << endl;
    
    cout << "Enter Name One:" << endl;
    cin.getline(firstN, SIZE);
    
    cout << "Enter Name Two:" << endl;
    cin.getline(secondN, SIZE);
    
    cout << "Enter Name Third:" << endl;
    cin.getline(thirdN, SIZE);
    
    
    //Different ways out put can be determined
    if (strcmp(firstN, secondN) < 0)//first less than second and third
    {
        cout << "First name: " <<  firstN << endl;
    }
    if (strcmp(secondN, firstN) < 0 )//second less than first and third
    {
        cout << "First name: " << secondN << endl;
    }
    if (strcmp(thirdN, firstN ) > 0 )//first greater than second and third
    {
        if(strcmp(thirdN, secondN) > 0 )
        {
        cout << "First name: " << thirdN << endl;
        }
    }
    if (strcmp(thirdN, secondN ) < 0 )//first greater than second and third
    {
        if(strcmp(thirdN, firstN) < 0 )
        {
         cout << "First name: " << thirdN << endl;
        }
    }
    if (strcmp(secondN, firstN) > 0)//second greater than first and third
    {
        cout << secondN << endl;
    }

    return 0;
}

