#include "Account.h"

void Account::setAccountNumber(const string& accNum) {
    accountNumber = accNum;
}

void Account::setBalance(double amount) {
    if (amount >= 0) {
        balance = amount;
    }
}

string Account::getAccountNumber() const {
    return accountNumber;
}

double Account::getBalance() const {
    return balance;
}
