#include "ConstantPointer.h"

int main() {
    ConstantPointer obj(10);
    obj.ConstToPointerExample();  // Demonstrating const int* behavior
    obj.PointerToConstExample();  // Demonstrating int* const behavior
    return 0;
}
