/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 * Purpose: Roman Numeral Converter (1000-3000)
 * Created on April 6, 2016, 8:20 AM
 */

//System libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv)
{
    //Declare variables
    //unsigned short number = 2016;//example number to convert
    //unsigned short number;//example number to convert WITH USER INPUT
    for(unsigned short numb = 1000; numb <= 3000; numb++)
    {
    
    unsigned short number = numb;
    //output the input
    //cout << "Please input number to covert to roman numerals: ";
    //cin >> number;
    //cout << "Convert " << number << " to roman numerals" << endl;
    cout << number << " = ";

    //Determine how many 100's for Roman Numeral conversion
    unsigned char n1000s = (number - number%1000) / 1000;

    //Output the results for 1000's
    switch(n1000s)
    {
        case 3:cout <<'M';
        case 2:cout <<'M';
        case 1:cout <<'M';
    }
    //Determine how many 100's for Roman Numeral conversion
    number -= (n1000s * 1000);
    unsigned char n100s = (number - number%100) / 100;
    switch(n100s)
    {
        case 9:cout << "CM";
        break;
        case 8:cout << "DCCC";
        break;
        case 7:cout << "DCC";
        break;
        case 6:cout << "DC";
        break;
        case 5:cout << "D";
        break;
        case 4:cout <<"CD";
        break;
        case 3:cout << 'C';
        case 2:cout << 'C';
        case 1:cout << 'C';
    }
    //Determine how many 10's for Roman Numeral conversion
    number -= (n100s * 100);
    unsigned char n10s = (number - number%10) / 10;
    switch(n10s)
    {
        case 9:cout << "XC";
        break;
        case 8:cout << "LXXX";
        break;
        case 7:cout << "LXX";
        break;
        case 6:cout << "LX";
        break;
        case 5:cout << "L";
        break;
        case 4:cout <<"XXXL";
        break;
        case 3:cout << 'X';
        case 2:cout << 'X';
        case 1:cout << 'X';
    }
    //Determine how many 10's for Roman Numeral conversion
    number -= (n10s * 10);
    unsigned char n1s = (number - number%1) / 1;
    switch(n1s)
    {
        case 9:cout << "XI";
        break;
        case 8:cout << "VIII";
        break;
        case 7:cout << "VII";
        break;
        case 6:cout << "VI";
        break;
        case 5:cout << "V";
        break;
        case 4:cout <<"IV";
        break;
        case 3:cout << 'I';
        case 2:cout << 'I';
        case 1:cout << 'I';
    }
    cout << endl;
    }
    //Exit
    return 0;
}