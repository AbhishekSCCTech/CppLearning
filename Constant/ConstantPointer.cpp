#include "ConstantPointer.h"

ConstantPointer::ConstantPointer(int val) : pConst(new int(val)), cPtr(new int(20)), ptr(new int(val)) {}

void ConstantPointer::ConstToPointerExample() {
    cout << "Before modifying via const int* (value): " << *cPtr << endl;
    cout << "After attempting to modify via const int* (value remains): " << *cPtr << endl;
}

void ConstantPointer::PointerToConstExample() {
    cout << "Before modifying via int* const (address): " << *pConst << endl;
    *ptr = 30; // Valid, because ptr is not constant
    cout << "After modifying via int* const (value changes): " << *ptr << endl;
}
