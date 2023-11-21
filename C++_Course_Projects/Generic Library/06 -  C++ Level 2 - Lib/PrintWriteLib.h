#pragma once
// Course 06 - Introduction to Programming Using C++ Level 2
// Lesson #08 - Library: Create Your Own Library

#include <iostream>
using namespace std;

namespace PrintWriteLib
{

	void PrintDigits(int Number)
	{
	// Print Digits in reverse Order.
		int  Remainder = 0;

		while (Number > 0)
		{
			Remainder = Number % 10;
			Number = Number / 10;
			cout << Remainder << endl;
		}
	}

	void PrintInvertedLetterPattern(int Number)
	{
		cout << "\n";

		for (int i = 65 + Number - 1; i >= 65; i--)
		{

			for (int j = 1; j <= Number - (65 + Number - 1 - i); j++)
			{
				cout << char(i);
			}
			cout << "\n";
		}
	}

	void PrintInvertedNumberPattern(int Number)
	{
		cout << "\n";
		for (int i = Number; i >= 1; i--)
		{
			for (int j = 1; j <= i; j++)
			{
				cout << i;
			}
			cout << "\n";
		}
	}

	void PrintWordsFromAAAtoZZZ()
	{
		cout << "\n";
		string word = "";

		for (int i = 65; i <= 90; i++)
		{
			for (int j = 65; j <= 90; j++)
			{
				for (int k = 65; k <= 90; k++)
				{
					word = word + char(i);
					word = word + char(j);
					word = word + char(k);
					cout << word << endl;
					word = "";
				}
			}
			cout << "\n____________________________\n";
		}
	}

	void PrintArray(int arr[100], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)

			cout << arr[i] << " ";

		cout << "\n";
	}

	void PrintDigits(int Number)
	{
		int  Remainder = 0;

		while (Number > 0)
		{
			Remainder = Number % 10;
			Number = Number / 10;
			cout << Remainder << endl;
		}
	}

	void PrintInvertedLetterPattern(int Number)
	{
		cout << "\n";

		for (int i = 65 + Number - 1; i >= 65; i--)
		{

			for (int j = 1; j <= Number - (65 + Number - 1 - i); j++)
			{
				cout << char(i);
			}
			cout << "\n";
		}
	}

	void PrintInvertedNumberPattern(int Number)
	{
		cout << "\n";
		for (int i = Number; i >= 1; i--)
		{
			for (int j = 1; j <= i; j++)
			{
				cout << i;
			}
			cout << "\n";
		}
	}

	void PrintWordsFromAAAtoZZZ()
	{
		cout << "\n";
		string word = "";

		for (int i = 65; i <= 90; i++)
		{
			for (int j = 65; j <= 90; j++)
			{
				for (int k = 65; k <= 90; k++)
				{
					word = word + char(i);
					word = word + char(j);
					word = word + char(k);
					cout << word << endl;
					word = "";
				}
			}
			cout << "\n____________________________\n";
		}
	}





}
