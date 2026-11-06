#include <iostream>
#include <vector>
using namespace std;

class NumArray {
private:
    vector<long long> prefix; // Stored inside the object!

public:
    // Constructor: builds the 1-indexed prefix sum array in O(N) time
    NumArray(const vector<int>& nums) : prefix(nums.size() + 1, 0) {
        for (size_t i{}; i < nums.size(); i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }
    }

    // Query function: answers any [left, right] sum in O(1) instant time!
    long long sumRange(int left, int right) const {
        return prefix[right + 1] - prefix[left];
    }
};

int main() {
    vector<int> nums{2, 4, -1, 5, 2};
    NumArray tracker(nums);

    cout << tracker.sumRange(1, 3) << "\n"; // 4 + (-1) + 5 = 8
    cout << tracker.sumRange(0, 4) << "\n"; // 2 + 4 + (-1) + 5 + 2 = 12
    cout << tracker.sumRange(2, 2) << "\n"; // Single element at index 2 = -1
    return 0;
}