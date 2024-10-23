#pragma once
#include <string>
#include <stdexcept>

using namespace std;

class UserAuthentication {
private:
    string validUsername = "admin";
    string validPassword = "1234";
    int attempts = 0;
    const int maxAttempts = 3;

public:
    void login(const string& username, const string& password);
};

class MaxAttemptsExceededException : public runtime_error {
public:
    MaxAttemptsExceededException() : runtime_error("Login attempts exceeded.") {}
};
