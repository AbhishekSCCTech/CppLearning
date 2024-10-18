#include <iostream>
#include "Comparison.h"

int main() {
    Comparison comp;
    int value = 100;

    int* ptr = &value;
    int& ref = value;

    std::cout << "Initial value: " << value << std::endl;

    comp.modifyWithPointer(ptr);
    std::cout << "After pointer modification: " << value << std::endl;

    comp.modifyWithReference(ref);
    std::cout << "After reference modification: " << value << std::endl;

    comp.modifyWithPointer(ptr);
    std::cout << "After again pointer modification: " << value << std::endl;

    comp.modifyWithReference(ref);
    std::cout << "After again reference modification: " << value << std::endl;

    return 0;
}
