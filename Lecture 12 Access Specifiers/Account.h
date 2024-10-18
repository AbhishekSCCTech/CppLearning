#pragma once
#include <string>
using namespace std;

class Account {
private:
    string accountNumber;
    double balance;

public:
    void setAccountNumber(const string& accNum);
    void setBalance(double amount);
    string getAccountNumber() const;
    double getBalance() const;
};
