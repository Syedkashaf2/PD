#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int minSubarraySumOfSizeK(const vector<int> &nums, int k)
{
    // Write your O(N) fixed-size sliding window solution here!

    if (nums.size() < k)
    {
        return 0;
    }

    int currentSum{};
    for (int i{}; i < k; i++)
    {
        currentSum += nums.at(i);
    }

    int minSum = currentSum;

    for (int i{k}; i < nums.size(); i++)
    {
        currentSum += nums[i] - nums[i - k];

        minSum = min(minSum, currentSum);
    }

    return minSum;
}

int main()
{
    vector<int> nums{10, 4, 2, 5, 6, 3, 8, 1};
    int k = 3;

    cout << minSubarraySumOfSizeK(nums, k) << '\n';

    return 0;
}