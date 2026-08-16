#include <iostream>
#include "profile.h"

using namespace std;

void displayProfileInformation()
{
    cout << "Name       : Abhaya Manasa\n";
    cout << "Student ID : 2026202014\n";
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