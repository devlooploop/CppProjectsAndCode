// Problem-21-Circle-Ar-Circumference.cpp 

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float L, PI = 3.14, area;

	cin >> L;
	area = (L * L) / (4 * PI);
	//cout << fixed << setprecision(2) << area;
	cout << area;
}

