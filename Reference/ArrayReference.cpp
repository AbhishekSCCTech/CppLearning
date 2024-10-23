#include "ArrayReference.h"

ArrayReference::ArrayReference(int size) : size(size) {
    arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = i + 1; // Initialize elements
    }
}

ArrayReference::~ArrayReference() {
    delete[] arr;
}

int& ArrayReference::GetElement(int index) {
    return arr[index]; // Return reference to the element
}

void ArrayReference::Display() const {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
