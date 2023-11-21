
#include <iostream>
#include <string>

using namespace std;

int main()
{
     string Name , City , Country;

     char Gender ;
     short int Age;
     float Month_Salary =0.0, Yearly_Salary = 0.0;
     bool isMarried = true;

     cout << "Enter your name: ";
     getline(cin,Name);
     cout << Name << endl;
     cout << "Enter your Age" << endl;
     cin >> Age;
     cout << Age << endl;

     cout << "Enter your City" << endl;
     cin >> City;
     cout << City << endl;

     cout << "Enter your Country" << endl;
     cin >> Country;
     cout << Country << endl;

     cout << "Monthly Salary" << endl;
     cin >> Month_Salary;
     cout << Month_Salary << endl;

     Yearly_Salary = Month_Salary * 12;

     cout << " your Yearly Salaryis :" << endl;
     cout << Yearly_Salary << endl;
     cout << "Enter Gender: \n";
     cin >> Gender;
     cout << Gender << endl;
     cout << "Are You Married 1/0: \n";
     cin >> isMarried;   
     cout << isMarried << "\n";


     return 0;
}
