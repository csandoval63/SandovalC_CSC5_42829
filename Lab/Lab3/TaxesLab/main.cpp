/*
 * Author: Christian Sandoval
 * Created on March 2, 2016, 10:32 AM
 * Purpose: Military and NASA Budget percentage Calculator
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    float ustax, irtax, gogrev, Tax0, Tax1, ustot, iretot, Save;

    cout << "Input amount US taxes" << endl;
    cin >> ustax;//Input amount Us taxes corporations 

    cout << "Input amount of ireland corp. tax"<< endl;
    cin >> irtax;//Input amount Ireland taxes corporations

    cout << "Input Google Revenue" << endl;
    cin >> gogrev;//Input Google's revenue

    Tax0 = (gogrev * ustax);//Google/Company multiplied by US tax

    Tax1 = (gogrev * irtax);//Google/Company multiplied by ireland tax
    
    ustot = gogrev - Tax0;//Total in us after tax
    
    iretot = gogrev - Tax1;//Total in Ireland after taxes are paid
    
    Save = iretot - ustot;//total in us after taxes are paid

    cout << "Amount payed in taxes in US = $" << Tax0 << "" << endl;//Output Us after tax
    
    cout << "Amount payed in taxes in Ireland = $" << Tax1 << "" << endl;//Output Ireland after tax
    
    cout << "Savings if Google moved to Ireland from United States = $" << Save << "" << endl;//Output Ireland after tax
    
    return 0;
}

/*-----------------------TODO_LIST---------------------------
 * Create flow chart for this and NASA/military program
 * ---------Sources-------
 * US corp tax 35% http://www.smbiz.com/sbrl001.html
 * http://www.statista.com/statistics/266206/googles-annual-global-revenue/ (In 2015, Google's revenue amounted to 74.54 billion US dollars. ) 74.54e7 74,540,000,000
 * Ireland tax rate 12.5%  http://www.revenue.ie/en/tax/ct/
 */