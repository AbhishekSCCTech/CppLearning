# Login Attempt Limit Exceeded

## Problem Definition:
This program simulates a login system with a limit of 3 attempts to enter the correct credentials (username and password). If the user fails to provide the correct credentials after 3 tries, a custom exception is thrown indicating that the attempt limit has been exceeded.

## Solution:
The solution is implemented using a class `UserAuthentication` that checks the username and password. If the user enters invalid credentials, the attempt count is incremented. After 3 failed attempts, a custom exception `MaxAttemptsExceededException` is thrown, terminating further attempts.

### Key Features:
- Custom exception handling.
- Attempt limit of 3 tries.
- Short and simple code.

## Learning:
- How to implement custom exceptions using C++ class inheritance.
- How to handle multiple login attempts in a simple user authentication system.
- The use of exception handling to limit login attempts.

## Output:

