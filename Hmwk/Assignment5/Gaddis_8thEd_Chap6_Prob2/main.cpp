/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 *
 * Created on April 27 2016, 8:22 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

// Function Prototypes
float recLen();
float recWid();
float recArea(float, float);
void solutn(float, float, float);

// Execution begins here!
int main(int argc, char** argv)
{
	// Declare variables
        float inLen = 0; // length of a rectangle
        float inWid = 0; // width of a rectangle

        // get/call functions for length and width
        inLen = recLen();
        inWid = recWid();

        //get the double for the length and width
        //solution
        solutn(inLen, inWid, recArea(inLen, inWid));
        
        return 0;
}

//output the solution
void solutn(float inLen, float inWid, float area)
{
        //out put the inputed info and the area output by function recArea
        cout << "Rectangle's Length: " << inLen
             << "\nRectangle's Width: " << inWid
             << "\nRectangle's Area: " << area << endl;
        
	return;
}

//get the area of rec
float recArea(float inWid, float inLen)
{
        //declare variable
        float area = 0.0f;
        
        //calculate the area
        area = inLen * inWid;

        //return value of calcuated area
        return area;
}

float recWid()
{
        //declare variable
        float inWid = 0; 
        
        //ask for user input for width
        cout << "Enter the rectangle's width: ";
        cin >> inWid;
        
        //return width value that was inputed above
        return inWid;
}

float recLen()
{
        //decalre variable
        float inLen = 0;
        
        //ask for user input for length
        cout << "Enter the rectangle's length: ";
        cin >> inLen;
        
        //return value that was inputed
        return inLen;
}