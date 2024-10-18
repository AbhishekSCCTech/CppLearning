#include "DynamicArray.h"

DynamicArray::DynamicArray(int cap) : capacity(cap), size(0) {
    data = new int[capacity];
}

DynamicArray::~DynamicArray() {
    delete[] data;
}

void DynamicArray::add(int value) {
    if (size >= capacity) {
        capacity *= 2;
        int* newData = new int[capacity];
        for (int i = 0; i < size; ++i) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
    }
    data[size++] = value;
}

void DynamicArray::remove() {
    if (size > 0) {
        --size;
    }
}

int DynamicArray::get(int index) const {
    if (index >= 0 && index < size) {
        return data[index];
    }
    throw out_of_range("Index out of bounds");
}

int DynamicArray::getSize() const {
    return size;
}
