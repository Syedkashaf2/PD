#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minSubArrayLength(int target, const vector<int>& nums) {
    int left = 0;
    int currentSum = 0;
    int minLength = static_cast<int>(nums.size()) + 1; // Starts at an "impossible" large size (7)

    for (int i = 0; i < static_cast<int>(nums.size()); i++) {
        currentSum += nums.at(i); // 1. Expand right end 'i'

        // 2. While window [left..i] is valid (sum >= target), record length & shrink 'left'!
        while (currentSum >= target) {
            int currentLength = i - left + 1;
            minLength = min(currentLength, minLength);
            currentSum -= nums.at(left); // Remove leftmost element from sum
            left++;                      // Pull tail forward!
        }
    }
    // If minLength never changed from nums.size() + 1, no valid subarray existed -> return 0:
    return (minLength == static_cast<int>(nums.size()) + 1) ? 0 : minLength;
}