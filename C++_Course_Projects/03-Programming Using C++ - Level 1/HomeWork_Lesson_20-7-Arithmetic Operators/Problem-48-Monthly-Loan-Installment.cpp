// Problem-48-Monthly-Loan-Installment.cpp 

#include <iostream>

int main()
{
    float LoanAmount, MonthsTosettle, MonthlyInstallment;

    std::cout << "Enter the Loan Amount: ";
    std::cin >> LoanAmount;
    std::cout << "Enter the Number of the Monthes you want to settle ";
    std::cin >> MonthsTosettle;

    MonthlyInstallment = LoanAmount / MonthsTosettle;
    std::cout << MonthlyInstallment << " Monthes\n";

    return 0;

}

