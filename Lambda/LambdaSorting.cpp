#include "LambdaSorting.h"

void LambdaSorting::SortDescending(vector<int>& nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) { return a > b; });
}
