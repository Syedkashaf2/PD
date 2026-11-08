#include <iostream>
#include <vector>
using namespace std;

vector<int> findPairWithSumSorted(const vector<int> &nums, int target)
{
    // Write your converging two-pointer (left, right) solution here!
    int left{}, right = nums.size() - 1;
    int currentSum{};

    while (left < right)
    {
        currentSum = nums[left] + nums[right];
        if (currentSum > target)
        {
            right--;
        }
        else if (currentSum < target)
        {
            left++;
        }
        else if (currentSum == target)
        {
            return {nums[left], nums[right]};
        }
    }
    return {};
}

int main()
{
    vector<int> nums{2, 5, 8, 12, 19, 25};
    int target{20};
    for (auto &n : findPairWithSumSorted(nums, target))
    {
        cout << n << ' ';
    }
    cout << '\n';
    return 0;
}