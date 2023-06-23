// Course - 04 - Solutions - Algorithms&Problem-Solving-Level 1 
// Problem #11 to #15 Solutions

// Use Procedures, Functions & structures (enum, struct ) in all solutions
// 
// From Algorthim and Problem Solving 

// Problem #13 Max of Three Numbers
/* 
Write a program to ask the user to enter 3 numbers:
� A
� B
� C
Then Print Max number.
Example Inputs:
30
10
20
Outputs:
30
*/

#include<iostream>
#include<string>

using namespace std;

void ReadNumbers(int &A, int &B, int& C)
{
	cout << "Please Entere Number A ? " << endl;
	cin >> A; 
	
	cout << "Please Entere Number B ? " << endl;
	cin >> B;

	cout << "Please Entere Number C ? " << endl;
	cin >> C;

}

int MaxOf3Numbers(int A, int B, int C)
{

	if (A > B)
		return A;

		else if (A > C)
			return C;
		
			

	else if (B > C)
		return B;
	else
		return C;

}

void PrintResults(int Max)
{
	cout << "\n The Maximum Number is: " << Max << endl;
}


int main()
{
	int A, B, C;

	ReadNumbers(A, B, C);
	PrintResults(MaxOf3Numbers(A, B, C));

	return 0;
}




