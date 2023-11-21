#pragma once
// Course 06 - Introduction to Programming Using C++ Level 2
// Lesson #08 - Library: Create Your Own Library

#include <iostream>
using namespace std;

enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

namespace CopyArrayAndNumberMyLib
{

	void CopyArray(int arrSource[100], int arrDestination[100], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			arrDestination[i] = arrSource[i];
	}

	void CopyArrayInReverseOrder(int arrSource[100], int arrDestination[100], int arrLength)
	{
		for (int i = 0; i < arrLength; i++)
			arrDestination[i] = arrSource[arrLength - 1 - i];
	}

	void AddArrayElement(int Number, int arr[100], int& arrLength)
	{

		//its a new element so we need to add the length by 1
		arrLength++;
		arr[arrLength - 1] = Number;

	}

	void CopyArrayUsingAddArrayElement(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
	{
		for (int i = 0; i < arrLength; i++)
			AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);

	}

	void CopyOddNumbers(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
	{
		for (int i = 0; i < arrLength; i++)
			if (arrSource[i] % 2 != 0)
			{
				AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
			}

	}

	enPrimNotPrime CheckPrime(int Number)
	{
		int M = round(Number / 2);
		for (int Counter = 2; Counter <= M; Counter++)
		{
			if (Number % Counter == 0)
				return enPrimNotPrime::NotPrime;
		}
		return enPrimNotPrime::Prime;

	}

	void CopyPrimeNumbers(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
	{

		for (int i = 0; i < arrLength; i++)
			if (CheckPrime(arrSource[i]) == enPrimNotPrime::Prime)
			{
				AddArrayElement(arrSource[i], arrDestination, arrDestinationLength);
			}
	}


	short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
	{
		/*This function will search for a number in array and
		return its index, or return -1 if it does not exists*/

		for (int i = 0; i < arrLength; i++)
		{
			if (arr[i] == Number)
				return i; //return its index
		}
		//if you reached here, this means the number is not found
		return -1;
	}

	bool IsNumberInArray(int Number, int arr[100], int arrLength)
	{
		return FindNumberPositionInArray(Number, arr, arrLength) != -1;
	}

	void CopyDistinctNumbersToArray(int arrSource[100], int arrDestination[100], int SourceLength, int& DestinationLength)
	{
		for (int i = 0; i < SourceLength; i++)
		{
			if (!IsNumberInArray(arrSource[i], arrDestination, DestinationLength))
			{
				AddArrayElement(arrSource[i], arrDestination, DestinationLength);
			}

		}

	}

}