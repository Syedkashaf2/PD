#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int minSubArrayLen(int target, const vector<int> &nums)
{
    // Write your variable-size shrinking window solution here!
    int minLen = nums.size() + 1;
    int currentSum{};
    int left{};

    for (int i{}; i < nums.size(); i++)
    {
        currentSum += nums.at(i);

        while (currentSum >= target)
        {
            minLen = min(minLen, i - left + 1);
            currentSum -= nums.at(left);
            left++;
            // cout << left << '\n';
        }
    }
    return ((minLen == nums.size() + 1) ? 0 : minLen);
}

int main()
{
    // vector<int> nums = {1, 4, 4};
    vector<int> nums = {1, 1, 1, 1, 1};
    int target = 40;
    cout << minSubArrayLen(target, nums) << '\n';
}