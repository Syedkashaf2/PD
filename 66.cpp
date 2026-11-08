#include <iostream>
#include <string>
#include <vector>
using namespace std;
int removeDuplicates(vector<int> &nums)
{
    if (nums.empty())
        return 0; // Essential guard if nums is {}!
    int slow = 0; // Index of the last unique element written so far

    for (size_t i = 1; i < nums.size(); i++)
    {
        // Whenever Scout 'i' sees a brand-new number different from nums[slow]:
        if (nums.at(i) != nums.at(slow))
        {
            slow++;                     // Advance Builder to the next slot
            nums.at(slow) = nums.at(i); // Write the new unique number there!
        }
    }
    return slow + 1; // If last unique index is 'slow', total unique count is 'slow + 1'!
}
int main()
{

    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    cout << removeDuplicates(nums) << '\n';
    return 0;
}
