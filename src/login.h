#ifndef LOGIN_H
#define LOGIN_H

bool validateCredentials(const std::string& username,
                         const std::string& password);

bool login();

#endif