// Problem35-PiggyBankCalculator.cpp 
#include <iostream>

using namespace std;

// Penny = 1
// Nickel = 5
// Dime = 10
// Quarter = 25
// Dollar = 100 pennies

int main()
{
    float Pennies, Nickels, Dimes, Quarters, Dollars;
    float Dollars_totall, Pennies_totall;

    cout << "Enter Pennies, Nickels, Dimes, Quarters, Dollars \n";
    cin >> Pennies;
    cin >> Nickels;
    cin >> Dimes;
    cin >> Quarters;
    cin >> Dollars;
    
    Pennies_totall = (Pennies * 1) + (Nickels * 5) + (Dimes * 10) + 
        (Quarters * 25) + (Dollars * 100);
    Dollars_totall = Pennies_totall / 100;

    cout << "\n Outputs : \n" << Pennies_totall << " Pennies";
    cout << "\n" << Dollars_totall  << " Dollars\n";
    
    return 0;
}
