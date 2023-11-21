// Problem-43-Seconds-to-Days-Hours-Minutes-Seconds.cpp 
// Input 193535 secondes, Output 2:5:45:35

#include <iostream>
#include<cmath>


using namespace std;

int main() {

    unsigned int num_of_secs, SecPerMinute, SecPerhour, SecPerDay;
    unsigned int  reminder;
    unsigned int  NumberOfDays, NumberOfHours, NumberOfMinutes;

    cout << "Enter number of secondes: ";
    cin >> num_of_secs;

    SecPerDay = 24 * 60 * 60;
    NumberOfDays = floor(num_of_secs / SecPerDay);
    reminder= num_of_secs % SecPerDay;

    SecPerhour = 60 * 60;
    NumberOfHours = floor(reminder / SecPerhour);
    reminder = num_of_secs % SecPerhour;

    SecPerMinute = 60;
    NumberOfMinutes = floor(reminder / SecPerMinute);
    reminder = num_of_secs % NumberOfMinutes;

    unsigned int Seconds = reminder;
    
    cout << NumberOfDays << ":" << NumberOfHours << ":" << NumberOfMinutes << ":" << Seconds;

    return 0;
}


