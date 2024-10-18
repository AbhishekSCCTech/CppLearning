
#include "DynamicArray.h"
#include <cstdlib>
using namespace std;

DynamicArray::DynamicArray(int size) : size(size) {
    arr = (int*)malloc(size * sizeof(int));
}

DynamicArray::~DynamicArray() {
    free(arr);
}

void DynamicArray::add(int index, int value) {
    if (index >= 0 && index < size)
        arr[index] = value;
}

void DynamicArray::remove(int index) {
    if (index >= 0 && index < size)
        arr[index] = 0;
}

void DynamicArray::display() const {
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << std::endl;
}

