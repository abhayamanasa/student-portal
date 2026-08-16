#include <iostream>
#include <string>
#include "login.h"

using namespace std;

bool login()
{
    string username;
    string password;

    cout << "\n========== STUDENT LOGIN ==========\n";

    cout << "Username: ";
    cin >> username;

    cout << "Password: ";
    cin >> password;

    if (username == "student" && password == "1234")
    {
        cout << "\nLogin successful!\n";
        cout << "Welcome, " << username << "!\n";

        return true;
    }

    cout << "\nInvalid username or password.\n";

    return false;
}