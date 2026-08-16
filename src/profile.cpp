#include <iostream>
#include "profile.h"

using namespace std;

string getStudentName()
{
    return "Abhaya Manasa";
}

string getStudentId()
{
    return "2026202014";
}

void displayProfileInformation()
{
    cout << "Name       : " << getStudentName() << "\n";
    cout << "Student ID : " << getStudentId() << "\n";
    cout << "Department : Computer Science\n";
    cout << "Year       : I Year\n";
    cout << "Email      : student@iiit.com\n";
}

void showProfile()
{
    cout << "\n========== STUDENT PROFILE ==========\n";

    displayProfileInformation();

    cout << "=====================================\n";
}