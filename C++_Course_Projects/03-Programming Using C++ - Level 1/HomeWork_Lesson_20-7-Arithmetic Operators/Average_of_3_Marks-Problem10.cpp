// Problem #10 - Average of 3 Marks

#include <iostream>

using namespace std;

int main()
{
     unsigned short int mark1, mark2, mark3,avg;

     cout << "Enter the marks below\n";
     cin >> mark1;
     cout << "\n";
     cin >> mark2;
     cin >> mark3;
     cout << "\n";

     avg = (mark1 + mark2 + mark3) / 3;
     cout << "The average is " <<avg;
}

