/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 *
 * Created on March 18, 2016, 10:46 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    //declare variables
    const int SIZE = 40;
    char name[SIZE], age[SIZE], city[SIZE], school[SIZE], profsn[SIZE], animl[SIZE], aName[SIZE];
    
    //ask user name
    cout << "What is your name" <<endl;
    cin >> name;
        
    //ask user age
    cout << "What is your age" <<endl;
    cin >> age;    
    
    //ask user city
    cout << "What city do you live in" <<endl;
    cin >> city;
        
    //ask user college
    cout << "What college do you attend" <<endl;
    cin >> school;
        
    //ask users profession
    cout << "What is your current profession" <<endl;
    cin >> profsn;
        
    //ask user type of animal
    cout << "Enter a type of animal" <<endl;
    cin >> animl;
        
    //ask user animals name
    cout << "Enter the animals name" <<endl;
    cin >> aName;
    
    //output game word game results
    cout << "There once was a person named " <<name << " who lived in " << city << ". At the age of "
         << age << ", " << name << " went to college at" << school << ". " << name << " graduated and "
            "went work as a " << profsn << ". Then, " << name << " adopted a(n) " << animl << " named "
            << aName << " . They both lived happily ever after!" << endl;
    
    return 0;
}

