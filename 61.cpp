#include <iostream>
#include <vector>
using namespace std;

int countHighEnergyWindows(const vector<int> &energy, int k, long long min_total)
{
    // Write your code here!
    vector<long long> prefix(energy.size() + 1, 0);
    for (int i{}; i < energy.size(); i++)
    {
        prefix[i + 1] = prefix[i] + energy[i];
    }

    cout << "PREFIX VECTOR : ";

    for (auto &n : prefix)
    {
        cout << n << ' ';
    }
    cout << '\n';

    int left = 0;
    int right = left + k;
    int count{};

    cout << "SUM OF K ELEMENTS : ";
    while (left + k <= energy.size())
    {
        cout << prefix[right] - prefix[left] << ' ';
        if ((prefix[right] - prefix[left]) >= min_total)
        {
            count++;
        }
        left++;
        right++;
    }
    cout << '\n';
    cout << "SUM OF COMBOs : ";
    return count;
}

int main()
{
    vector<int> energy = {4, 2, 7, 1, 8, 3};
    int k = 3;
    int min_total = 12;

    cout << countHighEnergyWindows(energy, k, min_total) << '\n';
}