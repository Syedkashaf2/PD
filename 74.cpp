#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int countWindowsWithSumAtLeast(const vector<int> &nums, int k, int min_sum)
{
    int currentSum{};
    int count{};
    for (size_t i{}; i < k; i++)
    {
        currentSum += nums.at(i);
    }

    if (currentSum >= min_sum)
    {
        count++;
    }

    for (int i{k}; i < nums.size(); i++)
    {
        currentSum += nums.at(i) - nums.at(i - k);

        if (currentSum >= min_sum)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int> nums = {4, 2, 7, 1, 8, 3};
    int k{3}, min_sum{12};

    cout << countWindowsWithSumAtLeast(nums, k, min_sum) << '\n';
    return 0;
}