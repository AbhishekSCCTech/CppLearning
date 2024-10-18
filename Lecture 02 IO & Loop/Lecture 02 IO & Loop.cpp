#include "NaturalNumberSum.h"
#include <iostream>

int main() {
    NaturalNumberSum calculator;
    int n;

    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n > 0) {
        std::cout << "Sum: " << calculator.sum(n) << "\nCalls: " << calculator.getCallCount() << std::endl;
    }
    else {
        std::cout << "Please enter a positive integer." << std::endl;
    }

    return 0;
}
