// Problem-22-Circle Area Inscribed in an Isosceles Triangle

#include <iostream>

using namespace std;

int main()
{
	float area, a, b, PI = 3.14159;

	cout << "Enter a and b value below: \n";
	cin >> a;
	cin >> b;

	area = (PI * b * b / 4) * ((2 * a - b) / (2 * a + b));
	cout << "\n" << area;

	return 0;
}
