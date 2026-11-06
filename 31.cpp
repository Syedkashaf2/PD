#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {10, 20, 20, 10, 10, 50};
    // Key: the number itself | Value: how many times we have seen it (its frequency)
    unordered_map<int, int> freq;

    for (int n : nums)
    {
        freq[n]++; // Magic 1-liner!
    }

    // How to loop through a map: each element is a 'pair'
    // pair.first is the Key (the number)
    // pair.second is the Value (its frequency count)
    for (const auto &pair : freq)
    {
        cout << "Number " << pair.first << " appears " << pair.second << " times.\n";
    }
    return 0;
}