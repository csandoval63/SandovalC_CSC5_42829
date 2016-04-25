/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 * Purpose: To Illustrate the rule of 72 by the way of a do while loop
 * Created on April 25, 2016, 8:31 AM
 */

//System libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float save1(float, float, int);
float save2(float, float, int);
float save3(float, float, int);
float save4(float, float, int);
float save5(float, float, int = 9);
float save1(float, float, float);
int save6(float&, float, float, int);

//Execution Begins here
int main(int argc, char** argv)
{
    //Declare variables
    float pv = 100.0f;//Present value
    float iRate = 0.08f;//intrest rate
    float nComp = 9;//Number of compounding periods by the rul of 72
    
    //Output initial conditions and results
    cout << "Present Value = $" << pv << endl;
    cout << "Intrest rate = " << iRate*100 << "%" << endl;
    cout << "Number of Compounding periods = " << nComp << " years" << endl;
    
    //OutPut Results
    cout << fixed << setprecision(2) << showpoint;
    cout << "The Future Value = $" << save1(pv, iRate,nComp) << endl;
    cout << "The Future Value = $" << save2(pv, iRate,nComp) << endl;
    cout << "The Future Value = $" << save3(pv, iRate,nComp) << endl;
    cout << "The Future Value = $" << save4(pv, iRate,nComp) << endl;
    cout << "The Future Value = $" << save5(pv, iRate,nComp) << endl;
    cout << "The Future Value = $" << save1(pv, iRate, static_cast<float>(nComp)) << endl;
    float fv;
    save6(fv,pv,iRate,nComp);
    save6(fv,pv,iRate,nComp);
    cout << "The Future Value = $" << fv << endl;
    cout << "Number of times save 6 was called = " << save6(fv,pv,iRate,nComp) << endl;
    
    return 0;
}

//Inputs 
// p-> Present Value $'s
// i -> interest rate%
//n->n number of compounding  years
//outputs
// fv-> future value in $'s
float save1(float p, float i, int n)//method 1
{
    return p*pow(1+i, n);
}

//Inputs 
// p-> Present Value $'s
// i -> interest rate%
//n->n number of compounding  years
//outputs
// fv-> future value in $'s

float save2(float p, float i, int n)//method 2
{
    return p*exp(n*log(1+i));
}

//Inputs 
// p-> Present Value $'s
// i -> interest rate%
//n->n number of compounding  years
//outputs
// fv-> future value in $'s

float save3(float p, float i, int n)//method 3
{
    //decalre variables
    float fv = p;
    
    //loop on the number
    for(int years = 1; years < n; years++)
    {
        fv*=1+i;
    }
    
    return p*pow(1+i, n);
}

//Inputs 
// p-> Present Value $'s
// i -> interest rate%
//n->n number of compounding  years
//outputs
// fv-> future value in $'s

float save4(float p, float i, int n)//method 4
{
    //decalre variables
    if(n<1)return p;

    return save4(p,i,n-1)*(1+i);
}

//Inputs 
// p-> Present Value $'s
// i -> interest rate%
//n->n number of compounding  years
//outputs
// fv-> future value in $'s

float save5(float p, float i, int n)//method 5
{
    //decalre variables
    if(n<1)return p;

    return save4(p,i,n-1)*(1+i);
}

//Inputs 
// p-> Present Value $'s
// i -> interest rate%
//n->n number of compounding  years
//outputs
// fv-> future value in $'s

float save1(float p, float i, float n)//method 6
{
    return p*pow(1+i, n);
}

//Inputs 
// p-> Present Value $'s
// i -> interest rate%
//n->n number of compounding  years
//outputs
// fv-> future value in $'s

int save6(float &fv, float p, float i, int n)//method 7
{
    //decalre variables
    static int  count = 0;
    fv = p;
    
    //loop on the number
    for(int years = 1; years < n; years++)
    {
        fv*=1+i;
    }
    
    return ++count;
    //Number of times it function was called
}