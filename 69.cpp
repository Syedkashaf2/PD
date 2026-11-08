#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int maxSubarraySum(const vector<int> &nums, int k)
{
    if (static_cast<int>(nums.size()) < k)
        return 0;

    int currentSum = 0;
    // 1. Build the very first window of size k (indices 0 to k - 1):
    for (int i = 0; i < k; i++)
    {
        currentSum += nums.at(i);
    }

    int maxSum = currentSum; // Best sum seen so far is the first window!

    // 2. Slide the window one step at a time from index i = k to the end:
    for (size_t i = k; i < nums.size(); i++)
    {
        currentSum += nums.at(i) - nums.at(i - k); // Add entering, subtract leaving!
        maxSum = max(currentSum, maxSum);
    }
    return maxSum;
}

int main()
{
    vector<int> nums{2, 3, 1, 2, 4, 3};
    int k{3};

    cout << maxSubarraySum(nums, k) << '\n';

    return 0;
}