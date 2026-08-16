#include <iostream>
#include <string>
#include "login.h"

using namespace std;

bool validateUsername(const string& username)
{
    return username == "student";
}

bool validatePassword(const string& password)
{
    return password == "1234";
}

bool validateCredentials(const string& username, const string& password)
{
    return validateUsername(username) && validatePassword(password);
}

bool login()
{
    string username;
    string password;

    cout << "\n========== STUDENT LOGIN ==========\n";

    cout << "Username: ";
    cin >> username;

    cout << "Password: ";
    cin >> password;

    if (validateCredentials(username, password))
    {
        cout << "\nLogin successful!\n";
        cout << "Welcome, " << username << "!\n";

        return true;
    }

    cout << "\nInvalid username or password.\n";

    return false;
}