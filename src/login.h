#ifndef LOGIN_H
#define LOGIN_H

#include <string>

bool validateUsername(const std::string& username);

bool validateCredentials(const std::string& username,
                         const std::string& password);

bool login();

#endif