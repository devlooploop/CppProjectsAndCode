#pragma once
// This library for formatting & making tables

#include <iostream>
using namespace std;


// Course 05 - Algorithms & Problem-Solving Level 2
// Problem #01-2 Multiplication Table 1 to 10
string ColumSperator(int i)
{
	if (i < 10) return"   |";
	else return"  |";
}

      