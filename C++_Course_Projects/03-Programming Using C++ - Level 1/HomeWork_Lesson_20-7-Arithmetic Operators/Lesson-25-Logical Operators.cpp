// Lesson-25-Logical Operators.cpp 
// 1st coloumn which is 6 of them in the lesson 25 home work
// Using Boolean expression True or False
#include <iostream>

using namespace std;

int main()
{	
	bool result;

	// This iss the first coloumn
	cout <<"12 >= 12 is " << (12 >= 12) << "\n";
	cout << "12 > 7 is " << (12 > 7) <<endl;
	cout << "8  < 6 is " << (8 < 6) << endl;
	cout << "8 = 8 is " << (8 == 8) << endl;
	cout << "12 <= 12 is " << (12 <= 12) << endl;
	cout << "7 = 5 is " << (7 == 5) << endl<<"\n";
	
	// This is the second Coloumn!
	cout << "Not(12 >= 12) is " << !(12 >= 12) << "\n";
	cout << "Not(12 < 7) is " << !(12 < 7) << "\n";
	cout << "Not(8 < 6) is " << !(8 < 6) << "\n";
	cout << "Not(8 = 8) is " << !(8 >= 8) << "\n";
	cout << "Not(12 <= 12) is " << !(12 <= 12) << "\n";
	cout << "Not(7 = 5) is " << !(7 == 5) << "\n\n";

	// This is the 3rd coloumn
	cout <<"1 AND 1 is " << (1 && 1) << "\n";
	cout << "True AND 0 is " << (1 && 0) << "\n";
	cout << "0 OR 1 is " << (0 || 1) << "\n";
	cout << "0 OR 0 is " << (0 || 0) << "\n";
	cout << "Not 0 is " << !(0) << "\n";
	cout << "Not(1 OR 0) is " << !(1 || 0) << "\n\n";

	// This is the 4th coloumn
	cout << "(7 = 7) and (7 > 5) is " << ((7 == 7) && (7 > 5)) << endl ;
	cout << "(7 = 7) and (7 < 5) is " << ((7 == 7) && (7 < 5)) << endl;
	cout << "(7 = 7) OR (7 < 5) is " << ((7 == 7) || (7 < 5)) << endl;
	cout << "(7 < 7) OR (7 > 5) is " << ((7 < 7) || (7 > 5)) << endl;
	cout << "Not(7 = 7) and (7 > 5) is " << (!(7 == 7) && (7 > 5)) << endl;
	cout << "(7 = 7) and Not(7 < 5) is " << ((7 == 7) && !(7 < 5)) << endl;

	return 0;
	
}


