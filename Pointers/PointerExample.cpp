#include "PointerExample.h"

void PointerExample::demonstrateConstPointer() {
    int x = 10;
    int* const ptr = &x;  // Constant pointer
    cout << "Value before: " << *ptr << endl;

    *ptr = 20;  // Modifying value through the pointer is allowed
    cout << "Value after modifying through const pointer: " << *ptr << endl;

    // ptr = &y;  // Error: Cannot change the address a constant pointer holds
}

void PointerExample::demonstratePointerToConst() {
    int x = 10;
    const int* ptr = &x;  // Pointer to a constant value
    cout << "Value before: " << *ptr << endl;

    // *ptr = 20;  // Error: Cannot modify the value through the pointer

    int y = 20;
    ptr = &y;  // Changing the pointer itself is allowed
    cout << "Pointer now points to value: " << *ptr << endl;
}
