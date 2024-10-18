#include <iostream>
#include <algorithm>
#include "BinarySearch.h"
using namespace std;

int main() {
    int arr[] = { 12, 26, 32, 45, 71 };
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + size); // Ensure the array is sorted

    BinarySearch bs(arr, size);
    int key = 45;

    if (bs.search(key)) cout << "Element found\n";
    else cout << "Element not found\n";

    return 0;
}
