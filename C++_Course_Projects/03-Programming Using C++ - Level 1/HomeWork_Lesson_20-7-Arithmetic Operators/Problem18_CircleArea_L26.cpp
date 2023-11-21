// Problem18_CircleArea_L26.cpp 
// Problem18_CircleArea Lesson26 Math Functions C++
// after finding the result use ceil and print the final result.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float r, Area, PI = 3.14159;

    cout << "Enter radius value:\n";
    cin >> r;


    Area = PI * pow(r, 2);
    cout << ceil(Area) << "\n";

    return 0;
}

