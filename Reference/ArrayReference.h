#pragma once
#include <iostream>

using namespace std;

class ArrayReference {
public:
    ArrayReference(int size);
    ~ArrayReference();
    int& GetElement(int index); // Function returning a reference to an element
    void Display() const;

private:
    int* arr;
    int size;
};
