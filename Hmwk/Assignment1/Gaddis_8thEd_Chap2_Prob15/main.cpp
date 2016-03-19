/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 *
 * Created on February 27, 2016, 11:27 AM
 * Project purpose from chapter 2 page 81 #15
 * Purpose write a program that displays the following pattern on the screen:
 *     *
 *    ***
 *   *****
 *  *******
 */

#include <iostream>

using namespace std;

/*
 * 
 */

int main(int argc, char** argv)
{
    cout<<"   *"<<endl;//cout and 3 spaces before *
    cout<<"  ***"<<endl;//cout and 2 spaces before *
    cout<<" *****"<<endl;//cout and 1 spaces before *
    cout<<"*******"<<endl;
    return 0;
}