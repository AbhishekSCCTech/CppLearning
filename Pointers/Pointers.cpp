#include "PointerExample.h"

int main() {
    PointerExample example;

    cout << "Demonstrating Constant Pointer:" << endl;
    example.demonstrateConstPointer();

    cout << "\nDemonstrating Pointer to Constant:" << endl;
    example.demonstratePointerToConst();

    return 0;
}
