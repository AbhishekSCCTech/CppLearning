#include "UserAuthentication.h"
#include <iostream>
using namespace std;

void UserAuthentication::login(const string& username, const string& password) {
    if (attempts >= maxAttempts) {
        throw MaxAttemptsExceededException();
    }

    if (username == validUsername && password == validPassword) {
        attempts = 0;
        cout << "Login successful!" << endl;
    }
    else {
        attempts++;
        cout << "Invalid credentials. Attempt " << attempts << "/" << maxAttempts << endl;
        if (attempts >= maxAttempts) {
            throw MaxAttemptsExceededException();
        }
    }
}
