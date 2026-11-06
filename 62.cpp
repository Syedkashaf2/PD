#include <iostream>
#include <vector>
using namespace std;

// PRECONDITION: 'nums' MUST be sorted in ascending order!
bool hasPairSumSorted(const vector<int> &nums, int target)
{
    int left = 0;
    int right = static_cast<int>(nums.size()) - 1;

    while (left < right)
    {
        int currentSum = nums.at(left) + nums.at(right);

        if (currentSum > target)
        {
            right--; // Sum is too big -> need a smaller number from the right
        }
        else if (currentSum < target)
        {
            left++; // Sum is too small -> need a larger number from the left
        }
        else
        {
            return true; // currentSum == target -> Found!
        }
    }
    return false; // Fingers met (left == right) without finding target
}