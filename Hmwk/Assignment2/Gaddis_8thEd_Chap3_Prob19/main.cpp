/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 *
 * Created on March 7, 2016, 9:39 AM
 */


#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv)
{
    float L, R, N, P, lnCk;//l = loan, r = rate, n = # of monthly payemnt , p = monthly payment, lnCk = loan check
    
    cout << "What is the the loan Amount \n$";//ask for loan amount
    cin >> L;//User input value for loan
    
    cout << "What is the the Interest Rate Amount \n";// ask for intrest rate
    cin >> R;//User inputs interest rate
    
    cout<<"Number of monthly Payments\n";//ask for number of monthly payments
    cin >> N;//User inputs monthly payments
    
    cout<<"Loan Amount = $"<<L<<endl;//ask for number of monthly payments
    cout<<"Interest Rate Amount = "<<R<<endl;//ask for number of monthly payments
    cout<<"Number of payments = "<<N<<endl;//ask for number of monthly payments

    P = (( R* pow(1+R, N))/( pow( 1+R, N) -1 )) * L;//Equation to get monthly payment amount
    cout<<"Monthly Payment is \n$"<<P<<endl;//Outputs monthly payment amount user needs to make 
    
    lnCk = (P * pow(1+R, N)) / (R* pow(1+R, N));
    
    cout<<"Loan Check is $"<<lnCk;
           
    
    return 0;
}