#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool hasPairWithSum(const vector<int> &nums, int target)
{
    // Write your O(N) solution using an unordered_map (NOT nested loops!)
    unordered_map<int, int> seen;
    for (int i{}; i < static_cast<int>(nums.size()); i++)
    {
        int needed = target - nums.at(i);
        if (seen.count(needed) > 0)
            return true;
        seen[nums[i]] = i;
    }
    return false;
}

int main()
{
    vector<int> nums{5, 2, 9};
    int target{10};

    cout << hasPairWithSum(nums, target) << '\n';
    return 0;
}
