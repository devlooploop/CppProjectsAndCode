
// Course 06 - Introduction to Programming Using C++ Level 2
// Lesson #08 - Library: Create Your Own Library
#pragma once

#include<iostream>
using namespace std;

// In the home work there is more than one Library, 
// we will just make few of them in this home work 

namespace MathOpsMyLib
{

	float SimpleCalculator(float Number1, float Number2 )
	{
		char OpType;
		
		cout << "Enter the Operation type? ";
		cin >> OpType;

		switch (OpType)
		{
		case '+':
			return Number1 + Number2;
		case '-':
			return Number1 - Number2;
		case '*':
			return Number1 * Number2;
		case '/':
			return Number1 / Number2;
		default:
			return Number1 + Number2;
		}
	}


	int SumArray(int arr[100], int arrLength)
	{
		int Sum = 0;

		for (int i = 0; i < arrLength; i++)
		{
			Sum += arr[i];

		}
		return Sum;
	}

	void SumOf2Arrays(int arr[100], int arr2[100], int arrSum[100], int arrLength)
	{

		for (int i = 0; i < arrLength; i++)
		{
			arrSum[i] = arr[i] + arr2[i];

		}
	}

	int SumOfDigits(int Number)
	{
		int  Remainder = 0, Sum = 0;

		while (Number > 0)
		{
			Remainder = Number % 10;
			Number = Number / 10;

			Sum = Sum + Remainder;
		}
		return Sum;
	}

	int OddCount(int arr[100], int arrLength)
	{
		int Counter = 0;

		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] % 2 != 0)
			{
				Counter++;
			}
		}
		return Counter;
	}

	int EvenCount(int arr[100], int arrLength)
	{
		int Counter = 0;

		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] % 2 == 0)
			{
				Counter++;
			}
		}
		return Counter;
	}

	int PositiveCount(int arr[100], int arrLength)
	{
		int Counter = 0;

		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] >= 0)
			{
				Counter++;
			}
		}
		return Counter;
	}

	int NegativeCount(int arr[100], int arrLength)
	{
		int Counter = 0;

		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] < 0)
			{
				Counter++;
			}
		}
		return Counter;
	}




}