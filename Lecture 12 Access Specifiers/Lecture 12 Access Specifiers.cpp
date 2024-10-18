#include <iostream>
#include "Account.h"
using namespace std;

int main() {
    Account myAccount;
    myAccount.setAccountNumber("123456789");
    myAccount.setBalance(1000.0);

    cout << "Account Number: " << myAccount.getAccountNumber() << endl;
    cout << "Balance: $" << myAccount.getBalance() << endl;

    return 0;
}
