/* 
 * File:   main.cpp
 * Author: Christian Sandoval
 * Purpose:  Retirement Savings Plan
 *           Refer to http://california.municipalbonds.com/bonds/recent
 * Date:     March 30th, 2016  8:37am
 * //Reads from files with out ifstream functions
 * //fn stands for file name
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void prntAry(char[], int , int);
int rdFile(char [], char[]);//file name is a character array
int score(char [], int , char [], int);

//Execution Begins Here
int main(int argc, char** argv)
{
    //Declare variables
    const int SIZE = 100;
    char answers[SIZE];
    char user[SIZE];

    //Open the files
    char fnAns[]="AnswerKey.dat";
    int nAnswers=rdFile(fnAns,answers);
    char fnUsr[]="UserAnswers.dat";
    int nUser=rdFile(fnUsr,user);
    
    //Print the arrays
    cout<<"The Answer Key"<<endl;
    prntAry(answers,nAnswers,10);
    cout<<"The Users Answers"<<endl;
    prntAry(user,nUser,10);
    
    //calculate the results
    int results=score(answers,nAnswers,user,nUser);
    cout<<"Score = "<<results<<" right -> "
            <<1.0f*results/nAnswers*100<<"%"<<endl;
    
    //Exit stage right
    return 0;
}

int score(char answers[], int nAnswers, char user[], int nUser)
{
    //Calculate the results
    int results=0;
    for(int ques=0;ques<nAnswers&&ques<nUser;ques++)
    {
        if(answers[ques]==user[ques])results++;
    }
    return results;
}

void prntAry(char a[], int nInA, int  perLine)
{
    cout<<endl;
    for(int i=0;i<nInA;i++)
    {
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

               //file name //data     //
int rdFile(char fn[], char dat[])
{
    //Declare variables
    ifstream ansKey;//input

    //Open the file
    ansKey.open(fn);
    
    //Read from the file
    int n = 0;
    while(ansKey >> dat[n])
    {
          n ++;
    }
    
    //close file
    ansKey.close();
    
    //return the size
    return n;
}