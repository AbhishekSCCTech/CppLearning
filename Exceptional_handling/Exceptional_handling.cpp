#include <iostream>
#include "UserAuthentication.h"

int main() {
    UserAuthentication auth;
    string username, password;

    try {
        for (int i = 0; i < 3; ++i) {
            cout << "Enter username: ";
            cin >> username;
            cout << "Enter password: ";
            cin >> password;
            auth.login(username, password);
        }
    }
    catch (const MaxAttemptsExceededException& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
    