// This is the Lesson # 20 Arithmetic Operators HW and the rest 
// Home Work # 7-9-10-14-15-17-19-20-21-22-31-35-39
//We dont do type casting yet here, and we take only int numbers!
#include <iostream>

using namespace std;

int main()
{
     int A, B, C;

     cout << "Please Enter the first number A ?\n";
     while (!(cin >> A))
     {
          cout << "Error Enter int numbers 0-9 ?\n";
          cin.clear();
          cin.ignore(200, '\n');
     }
     cout << "Please Enter the Second number B ?\n";

     while (!(cin >> B))
     {
          cout << "Error Enter int numbers 0-9 ?\n";
          cin.clear();
          cin.ignore(200, '\n');
     }
     cout << A << " + " << B << " = " << A + B << endl;
     cout << A << " - " << B << " = " << A - B << endl;
     cout << A << " * " << B << " = " << A * B << endl;
     cout << A << " / " << B << " = " << A / B << endl;
     cout << A << " % " << B << " = " << A % B << endl;

     return 0;
}



