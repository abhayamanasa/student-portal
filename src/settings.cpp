#include <iostream>
#include "settings.h"

using namespace std;

void showSettings()
{
    int choice;

    cout << "\n========== SETTINGS ==========\n";

    cout << "1. Change Password\n";
    cout << "2. Notification Preferences\n";
    cout << "3. Back\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "\nPassword change option selected.\n";
            cout << "Password update functionality can be added later.\n";
            break;

        case 2:
            cout << "\nNotification preferences selected.\n";
            cout << "Notifications are currently enabled.\n";
            break;

        case 3:
            cout << "\nReturning to dashboard...\n";
            break;

        default:
            cout << "\nInvalid choice.\n";
    }
}