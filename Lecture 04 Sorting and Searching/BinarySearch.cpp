#include "BinarySearch.h"

BinarySearch::BinarySearch(int* arr, int size) : arr(arr), size(size) {}

bool BinarySearch::search(int key) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) return true;
        if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return false;
}

BinarySearch::~BinarySearch() {}
