#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int findMostFrequent(const vector<int> &nums)
{
    // Write your solution from your own reasoning
    int max{};
    int best{};
    unordered_map<int, int> freq;

    for (size_t i{}; i < nums.size(); i++)
    {
        freq[nums[i]]++;
    }

    for (auto n : freq)
    {
        if (n.second > max)
        {
            max = n.second;
            best = n.first;
        }
    }

    cout << best << " occurs " << max << " times\n";
    return max;
}

int main()
{
    vector<int> nums = {10, 40, 20, 10, 40, 40, 20};
    findMostFrequent(nums);
    return 0;
}