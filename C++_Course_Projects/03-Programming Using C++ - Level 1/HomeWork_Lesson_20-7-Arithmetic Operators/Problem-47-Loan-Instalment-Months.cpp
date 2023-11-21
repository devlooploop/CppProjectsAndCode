// Problem-47-Loan-Instalment-Months.cpp 

#include <iostream>

using namespace std;

int main()
{
    float LoanAmount, Monthly_Payment;

    cout << "Enter the Loan Amount and Monthly Payment:\n";
    cin >> LoanAmount;
    cin >> Monthly_Payment;

    cout << LoanAmount / Monthly_Payment << " Months";

}

