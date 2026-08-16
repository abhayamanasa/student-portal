#include <iostream>
#include "login.h"
#include "dashboard.h"

using namespace std;

int main()
{
    cout << "=====================================\n";
    cout << "        STUDENT PORTAL SYSTEM        \n";
    cout << "=====================================\n";

    bool loggedIn = false;

    loggedIn = login();

    if (loggedIn)
    {
        showDashboard();
    }

    cout << "\nThank you for using Student Portal!\n";

    return 0;
}