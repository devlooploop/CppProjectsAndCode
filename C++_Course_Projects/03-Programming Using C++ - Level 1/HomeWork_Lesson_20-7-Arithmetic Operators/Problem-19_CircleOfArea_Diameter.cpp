// Problem-19_CircleOfArea_Diameter.cpp 
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float D, area;
    float PI = 3.14;

    cin >> D;

    area = (PI * D * D) / 4;
     // in the solution printed area is 78.54 while here is 78.50
    cout << "\n" << fixed << setprecision(2) << area  ; //*** Output 78.50
   // cout << ceil(area);
   //cout << area; 
    return 0;
}

