#include <iostream>
#include <vector>
using namespace std;

double clampNegativesAndAverage(vector<int> &nums)
{
    if (nums.empty())
    {
        return 0.0;
    }
    double sum{};
    int count{};
    for (auto &n : nums)
    {
        if (n < 0)
        {
            n = 0;
            count++;
        }
        // cout << n << '\n';
        sum += n;
    }
    return sum / (nums.size() - count);
}

int main()
{
    vector<int> nums{10, -10, 20, -20, 30, -30};
    cout << clampNegativesAndAverage(nums) << '\n';
}