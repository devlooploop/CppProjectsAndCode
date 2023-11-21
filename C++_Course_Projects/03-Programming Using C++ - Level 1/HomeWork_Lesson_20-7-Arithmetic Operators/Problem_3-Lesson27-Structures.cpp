// Problem_3-Lesson27-Structures.cpp 

#include<iostream>

using namespace std;

struct ID {
    string name;
    int    age ;
    char   gender ;
    bool   Married ;
};

struct Address {
    string City;
    string country;
};

struct ContactInfo {
    string  phoneNumber;
    ID      E_mail;
    Address st_adress;
    string  socialMedia;
};

struct Income {
    float MonthlySalary = 5000;
    float YearlySalary = 60000;
};

struct Person {
    ID st_ID;
    ContactInfo st_ContactInfo;
    Address st_address;
    Income st_income;
};



int main()
{

    Person malik, wandaa, alisha;

    cout << "******************************************************************************************************************\n";

    malik.st_ID.name = "Malik Saber.";
    malik.st_ID.age = 44;
    malik.st_address.City = "Amman.";
    malik.st_address.country = "Jordan";
    malik.st_income.MonthlySalary = 5000;
    malik.st_income.YearlySalary = 60000;
    malik.st_ID.gender = 'M';
    malik.st_ID.Married = 1;


    cout << "Name: " << malik.st_ID.name << "\n" <<
        "Age : " << malik.st_ID.age << " Years." << "\n" <<
        "City: " << malik.st_address.City << "\n";
    cout << "Country: " << malik.st_address.country <<
        "\n" << "Monthly Salary: " << malik.st_income.MonthlySalary << "\n"
        << "Yearly Salary: " << malik.st_income.YearlySalary << "\n";

    cout << "Gender: " << malik.st_ID.gender << endl 
         << "Married: " << malik.st_ID.Married << endl;

    cout <<"\n" << "******************************************************************************************************************\n";
    
    return 0;
}

