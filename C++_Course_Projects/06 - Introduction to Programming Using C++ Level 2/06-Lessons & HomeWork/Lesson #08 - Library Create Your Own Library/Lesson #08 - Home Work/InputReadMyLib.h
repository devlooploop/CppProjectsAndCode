#pragma once
// Course 06 - Introduction to Programming Using C++ Level 2
// Lesson #08 - Library: Create Your Own Library

#include <iostream>
using namespace std;


namespace InputReadMyLib
{

	void ReadArray(int arr[100], int& arrLength)
	{
		cout << "Enter number of elements:\n";
		cin >> arrLength;

		cout << "\nEnter array elements: \n";

		for (int i = 0; i < arrLength; i++)
		{
			cout << "Element [" << i + 1 << "]:";
			cin >> arr[i];
		}
		cout << endl;
	}

	int ReadNumber()
	{
		int Number;
		cout << "Please enter a number? ";
		cin >> Number;

		return Number;
	}

	int ReadPositiveNumber(string Message)
	{
		int Number = 0;
		do {
			cout << Message << endl;
			cin >> Number;
		} while (Number <= 0);

		return Number;
	}

}

