#pragma once
#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* data;
    int capacity;
    int size;

public:
    DynamicArray(int cap = 2);
    ~DynamicArray();
    void add(int value);
    void remove();
    int get(int index) const;
    int getSize() const;
};
