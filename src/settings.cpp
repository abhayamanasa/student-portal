#include <iostream>
#include "settings.h"

using namespace std;

void returnToDashboard()
{
    cout << "\nReturning to dashboard...\n";
}

void showNotificationPreferences()
{
    cout << "\nNotification preferences selected.\n";
    cout << "Notifications are currently enabled.\n";
}

void handlePasswordChange()
{
    cout << "\nPassword change option selected.\n";
    cout << "Password update functionality can be added later.\n";
}

bool readSettingsChoice(int& choice)
{
    if (cin >> choice)
    {
        return true;
    }

    cin.clear();
    cin.ignore(1000, '\n');

    return false;
}

void displaySettingsTitle()
{
    cout << "\n========== SETTINGS ==========\n";
}

void displaySettingsMenu()
{
    displaySettingsTitle();

    cout << "1. Change Password\n";
    cout << "2. Notification Preferences\n";
    cout << "3. Back\n";
}

void showSettings()
{
    int choice;

    displaySettingsMenu();

    cout << "Enter your choice: ";

    if (!readSettingsChoice(choice))
    {
        cout << "\nInvalid input. Please enter a number.\n";
        return;
    }

    switch (choice)
    {
        case 1:
            handlePasswordChange();
            break;

        case 2:
            showNotificationPreferences();
            break;

        case 3:
            returnToDashboard();
            break;

        default:
            cout << "\nInvalid choice.\n";
    }
}