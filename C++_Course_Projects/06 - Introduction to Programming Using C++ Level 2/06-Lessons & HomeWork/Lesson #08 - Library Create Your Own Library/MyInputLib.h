// Course 06 - Introduction to Programming Using C++ Level 2
// Lesson #08 - Library: Create Your Own Library

#pragma once

#include<iostream>
using namespace std;

namespace MyInputLib

{
	int ReadNumber()
	{
		int Number;

		cout << "Please Enter Number?\n";
		cin >> Number;

		return Number;
	}


}
