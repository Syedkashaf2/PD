#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(const vector<int> &nums)
{

    int current_ones{0};
    int max_ones{0};
    for (size_t i{}; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            current_ones++;
        }
        else
        {
            current_ones = 0;
        }
        if (max_ones < current_ones)
        {
            max_ones = current_ones;
        }
    }
    return max_ones;
}

int main()
{
    vector<int> nums{0, 1, 1, 0, 0, 1, 1, 1};
    cout << findMaxConsecutiveOnes(nums) << '\n';

    return 0;
}