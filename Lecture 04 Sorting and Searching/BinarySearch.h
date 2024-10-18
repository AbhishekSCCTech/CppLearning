#pragma once
class BinarySearch
{
    int* arr;
    int size;
public:
    BinarySearch(int* arr, int size);
    bool search(int key);
    ~BinarySearch();
};

