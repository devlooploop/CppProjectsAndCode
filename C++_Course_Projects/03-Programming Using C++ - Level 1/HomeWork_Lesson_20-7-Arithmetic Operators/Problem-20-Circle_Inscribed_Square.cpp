// Problem-20-Circle_Inscribed_Square 
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float area,A = 0, PI = 3.14;

	cin >> A;

	area = (PI * A * A) / 4;
	cout << "\n" << fixed << setprecision(2) << area;

	return 0;
   
}
