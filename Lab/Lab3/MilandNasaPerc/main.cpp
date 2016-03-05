/*
 * Author: Christian Sandoval
 * Created on March 2, 2016, 8:03 AM
 * Purpose: Military and NASA Budget percentage Calculator
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    float usbudg, nasa, miltry, perc0, perc1;
    
    cout << "Input United States Budget" << endl;
    cin >> usbudg;//Input US Total Budget (example) budget value 3.8 trillion is 3.8e12

    cout << "Input NASA Budget"<< endl;
    cin >> nasa;//Input Nasa budget (Example) value 2015 = 19.3 billion is 19.3e9

    cout << "Input Military Budget" << endl;
    cin >> miltry;//Input Military budget (Example) value 601 billion is 601e9

    perc0 = (miltry / usbudg)*100;//Military Budget/US Total Budget=Military Percentage
    
    perc1 = (nasa / usbudg)*100;//NASA Budget/US Total Budget=NASA Percentage

    cout << "Nasa Budget Percentage = " << perc1 << "% " << endl;//Output NASA percentage
    
    cout << "Military Budget Percentage = " << perc0 << "% " << endl;//Output Military Percentage

    return 0;
}

//US BUDGET In fiscal year 2015, the federal budget is $3.8 trillion. https://www.nationalpriorities.org/budget-basics/federal-budget-101/spending/
//NASA Budget$19.3 billion (Fiscal Year 2016, about 0.643% of total budget at about $3 trillion) https://en.wikipedia.org/wiki/Budget_of_NASA
//Military Budget 598.5 billion  https://www.nationalpriorities.org/campaigns/military-spending-united-states/