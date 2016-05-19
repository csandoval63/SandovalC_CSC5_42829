/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 * Purpose: INput 10 value and get largest and smallest number
 * Gaddis chapter 7 problem 1
 * Created on May 15, 2016, 10:18 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv)
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
            
    return 0;
}