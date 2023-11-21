// Problem40-ServiceFee_andSalesTax.cpp 
// 10% service fee
// 16% sales tax
// Input 100, Outputs 127.6

#include <iostream>

using namespace std;

int main()
{
	float BillValue, TotalBill;

	cout << "Enter the Bill Value:";
	cin >> BillValue;

	//BillValue += BillValue * 0.1 + BillValue * 0.16; // This maybe wrong!
	TotalBill = BillValue * 1.1;
	TotalBill = TotalBill * 1.16;

	cout << "\n Outputs: " << TotalBill ; // The instructor solution 

	return 0;
}

