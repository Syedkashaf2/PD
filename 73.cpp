#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int longestSubarrayWithinBudget(const vector<int> &costs, int budget)
{
    // Write your solution here!
    int minLen = costs.size() + 1;
    int left{};
    int currentSum{};
    int maxLen{};

    for (int i{}; i < costs.size(); i++)
    {
        currentSum += costs.at(i);
        while (currentSum > budget)
        {
            currentSum -= costs.at(left);
            left++;
        }
        maxLen = max(maxLen, i - left + 1);
    }
    return maxLen;
}

int main()
{
    vector<int> costs = {3, 2, 5};
    int budget = 5;

    cout << longestSubarrayWithinBudget(costs, budget) << '\n';

    return 0;
}