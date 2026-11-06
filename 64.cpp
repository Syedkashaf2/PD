#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool hasPairSum(const vector<int> &nums, int target)
{
    int left{}, right = nums.size() - 1;
    int currentSum{};

    while (left < right)
    {
        currentSum = nums.at(left) + nums.at(right);
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
            return 1;
        }
    }
    return 0;
}

int main()
{
    int target{13};
    vector<int> nums{2, 4, 6, 9, 15};
    cout << hasPairSum(nums, target) << '\n';
}