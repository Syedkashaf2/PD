#include <iostream>
#include <vector>
using namespace std;

void findMinAndMax(const vector<int>& nums, int &min_out, int &max_out) {
    // 1. If nums is empty, set min_out = 0 and max_out = 0, and return.
    if ( nums.empty() ) { 
        min_out = 0;
        max_out = 0;
        return;
    }
    // 2. Otherwise, initialize both min_out = nums[0] and max_out = nums[0] (like in CPCP/A6/Q1_4.c!).
    max_out = nums[0];
    min_out = nums[0];

    // 3. Loop through nums: update min_out if you see a smaller number, and update max_out if you see a larger number.

    for ( size_t i {1}; i < nums.size(); i++ )   {

        if ( nums[i] < min_out ) {
            min_out = nums[i];
        } else if ( nums[i] > max_out ) {
            max_out = nums[i];
        }
    }
    return;
}

int main()  {
    vector<int> nums {14, -3, 28, 7, 0};
    int min{},max{};

    findMinAndMax(nums, min, max);

    cout << "MAX : " << max << '\n'
         << "MIN : " << min << '\n';
}