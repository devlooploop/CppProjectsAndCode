// Problem-39-PayRemainder.cpp

#include <iostream>

using namespace std;

int main()
{
	float TotalBill, CashPaid, reminder;

	cout << " Enter total bill and cash paid: \n";
	cin >> TotalBill;
	cin >> CashPaid;

	reminder = CashPaid - TotalBill;

	cout << " The reminder is \n" << reminder;

}

