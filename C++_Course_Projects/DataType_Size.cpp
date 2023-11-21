// Thi program shows Data type Range and Size
// Using sizeof() and DataType_MIN and DataType_MAX
// ie  Char CHAR_MIN and CHAR_MAX


#include <iostream>
using namespace std;

int main()
{
    cout << "Char Range " << CHAR_MIN << "," << CHAR_MAX <<"\n";
    cout << "Char Size in byte " << sizeof(char)<<endl << endl;
    cout << "Unsigned Char Range " << 0 << "," << UCHAR_MAX << "\n";
    cout << "Unsigned Char Size in byte " << sizeof(unsigned char) << endl << endl;
    
    cout << "Short int Range " << SHRT_MIN << "," << SHRT_MAX << "\n";
    cout << "Short int Size in byte " << sizeof(short int) << "\n" << "\n";
    cout << "Unsigned Short int Range " << 0 << "," << USHRT_MAX << "\n";
    cout << "Unsigned Short int Size in byte " << sizeof(short int) << "\n " << "\n";

    cout << "int Range " << INT_MIN << "," << INT_MAX << "\n";
    cout << "int Size in byte " << sizeof(int) << endl << endl;
    cout << "Unsigned int Range " << 0 << "," << UINT_MAX << "\n";
    cout << "Unsigned int Size in byte " << sizeof(unsigned int) << endl << endl;

    cout << "Long int Range " << LONG_MIN << "," << LONG_MAX << "\n";
    cout << "Long int Size in byte " << sizeof(long int) << endl << endl;
    cout << "Unsigned Long Range " << 0 << "," << ULONG_MAX << "\n";
    cout << "Unsigned Long int Size in byte " << sizeof(unsigned long int) << endl << endl;

    cout << "Long Long int Range " << LLONG_MIN << "," << LLONG_MAX << "\n";
    cout << "Long Long int Size in byte " << sizeof(long long int) << endl << endl;
    cout << "Unsigned Long Long Range " << 0 << "," << ULLONG_MAX << "\n";
    cout << "Unsigned Long Long int Size in byte " << sizeof(unsigned long long int) << endl << endl;

    cout << "float Range " << FLT_MIN << "," << FLT_MAX << "\n";
    cout << "float Size in byte " << sizeof(float) << endl << endl;
    cout << "Float (negative) Range " << -FLT_MIN << "," << -FLT_MAX << "\n";

    cout << "double int Range " << DBL_MIN << "," << DBL_MAX << "\n";
    cout << "double Size in byte " << sizeof(double) << endl << endl;
    cout << "Negative double Range " << -DBL_MIN << "," << -DBL_MAX << "\n";    

}

