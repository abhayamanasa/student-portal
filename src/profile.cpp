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

string getDepartment()
{
    return "Computer Science";
}

string getStudentEmail()
{
    return "student@iiit.com";
}

string getAcademicYear()
{
    return "I Year";
}

void displayProfileInformation()
{
    cout << "Name       : " << getStudentName() << "\n";
    cout << "Student ID : " << getStudentId() << "\n";
    cout << "Department : " << getDepartment() << "\n";
    cout << "Year       : " << getAcademicYear() << "\n";
    cout << "Email      : " << getStudentEmail() << "\n";
}

void showProfile()
{
    cout << "\n========== STUDENT PROFILE ==========\n";

    displayProfileInformation();

    cout << "=====================================\n";
}