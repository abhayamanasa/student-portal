#include <iostream>
#include "dashboard.h"
#include "profile.h"
#include "settings.h"

using namespace std;

void showAcademicInformation()
{
    cout << "\n========== ACADEMIC INFORMATION ==========\n";
    cout << "Course       : Computer Science\n";
    cout << "Semester     : 1\n";
    cout << "Attendance   : 94%\n";
    cout << "CGPA         : 8.6\n";
    cout << "==========================================\n";
}

void showDashboard()
{
    int choice;

    do
    {
        cout << "\n========== STUDENT DASHBOARD ==========\n";

        cout << "1. View Profile\n";
        cout << "2. View Academic Information\n";
        cout << "3. Settings\n";
        cout << "4. Logout\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                showProfile();
                break;

            case 2:
                showAcademicInformation();
                break;

            case 3:
                showSettings();
                break;

            case 4:
                cout << "\nLogging out...\n";
                break;

            default:
                cout << "\nInvalid choice. Please try again.\n";
        }

    } while (choice != 4);
}