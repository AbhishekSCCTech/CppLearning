#include "LambdaSorting.h"

int main() {
    vector<int> nums = { 3, 5, 1, 4, 2 };

    LambdaSorting sorter;
    sorter.SortDescending(nums);

    cout << "Sorted numbers in descending order: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
