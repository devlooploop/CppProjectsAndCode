// Problem-42-TaskDuration-inSeconds.cpp 

#include <iostream>

using namespace std;

int main()
{
	float days, hours, minutes, seconeds, total_Seconeds;

	// days = 24   hours
	// hours = 60  minutes
	// minuts = 60 seconeds
	cin >> days;
	cin >> hours;
	cin >> minutes;
	cin >> seconeds;
	
	// The thousand seperator is for the next courses
	// The output will be without seperators

	total_Seconeds = seconeds * 1 + minutes * 60 + hours * 60 * 60 + days * 24 * 60 * 60;
	cout  << total_Seconeds << " Seconeds ";
}

