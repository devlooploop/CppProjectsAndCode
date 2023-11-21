// Problem-31-Power-of-2,3,4.cpp 

#include <iostream>

using namespace std;

int main()
{
    int num, num2, num3, num4;

    cout << "Enter a number\n";
    cin >> num;
    num2 = num * num;
    num3 = num * num * num;
    num4 = num * num * num * num;

    cout <<"Output :\n" << num2 << "\n" << num3 << "\n" << num4;

    return 0;
    
}


