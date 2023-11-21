// Program checks if input is Number or not
#include <iostream>

using namespace std;

int main()
{
   int a;
    cout << "enter int\n";
    
    while(!(cin >> a))
    {
		cout<<"Invalid Enter a number\n";
		
		cin.clear();   // Clear the previous input
														
		cin.ignore(123,'\n');  // Discard and Ignore 123 character of last line
    }
	// Display the number after Error check!
    cout << " The number is " << a << "\n"; 

    return 0;
}
