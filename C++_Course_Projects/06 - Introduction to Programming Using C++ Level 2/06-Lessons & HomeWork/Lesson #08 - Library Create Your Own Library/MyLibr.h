// Course 06 - Introduction to Programming Using C++ Level 2
// Lesson #08 - Library: Create Your Own Library

#pragma once

#include<iostream>
using namespace std;

namespace MyLib
{
	void Test()
	{
		cout << "Hi, This is my first function in my first Libraray" << endl;
	}

	int Sum2Numbers(int Num1, int Num2)
	{
		return Num1 + Num2;
	}
}