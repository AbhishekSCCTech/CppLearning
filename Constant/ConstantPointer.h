#pragma once
#include <iostream>

using namespace std;

class ConstantPointer {
public:
    ConstantPointer(int val);
    void ConstToPointerExample();  // Method to demonstrate constant pointers
    void PointerToConstExample();  // Method to demonstrate pointers to constants
private:
    int* ptr;       // Regular pointer
    const int* cPtr; // Constant pointer to an integer
    int* const pConst; // Pointer to constant
};
