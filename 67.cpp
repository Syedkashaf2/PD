#include <iostream>
#include <vector>
using namespace std;

int removeValueInPlace(vector<int> &nums, int val_to_remove)
{
    // Write your Slow/Fast pointer solution here!
    int slow{};
    for (size_t i{}; i < nums.size(); i++)
    {
        if (nums[i] != val_to_remove)
        {
            nums[slow] = nums[i];
            slow++;
        }
    }
    return slow;
}

int main()
{
    vector<int> nums = {3, 2, 2, 3, 4};
    int val_to_remove{3};
    cout << "Before : ";
    for (auto &n : nums)
    {
        cout << n << ' ';
    }
    cout << '\n';
    int k = removeValueInPlace(nums, val_to_remove);

    cout << "After : ";
    for (size_t i{}; i < k; i++)
    {
        cout << nums[i] << ' ';
    }
    cout << '\n';
    return 0;
}