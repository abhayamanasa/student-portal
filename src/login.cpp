#include <iostream>
#include <string>
#include "login.h"

using namespace std;

bool validateCredentials(const string& username, const string& password)
{
    return username == "student" && password == "1234";
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