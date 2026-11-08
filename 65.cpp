#include <iostream>
#include <string>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int slow{};
    for (size_t i{}; i < nums.size(); i++)
    {
        if (nums.at(i) != 0)
        {
            nums.at(slow) = nums.at(i);
            slow++;
        }
    }
    for (size_t j = slow; j < nums.size(); j++)
    {
        nums.at(j) = 0;
    }
}

int main()
{
    vector<int> nums{4, 0, 5};
    cout << "Before : ";
    for (auto &n : nums)
    {
        cout << n << ' ';
    }
    cout << '\n';
    moveZeroes(nums);

    cout << "After : ";
    for (auto &n : nums)
    {
        cout << n << ' ';
    }
    cout << '\n';

    return 0;
}
