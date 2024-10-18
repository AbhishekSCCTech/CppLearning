#pragma once
#include <iostream>
class DynamicArray
{
    int* arr;
    int size;
public:
    DynamicArray(int size);
    ~DynamicArray();
    void add(int index, int value);
    void remove(int index);
    void display() const;
};

