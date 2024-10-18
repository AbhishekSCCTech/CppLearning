#include "Comparison.h"

void Comparison::modifyWithPointer(int* ptr) {
    *ptr += 10;  // Modify value through pointer
}

void Comparison::modifyWithReference(int& ref) {
    ref += 20;   // Modify value through reference
}
