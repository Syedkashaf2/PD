#include <iostream>
#include <vector>
using namespace std;

double averageValidBitrate(const vector<int> &bitrates)
{
    // Write your code here
    double avg{};
    int count{};
    for (size_t i{}; i + 1 <= bitrates.size(); i++)
    {
        if (bitrates.at(i) == 99999)
            break;
        if (bitrates.at(i) <= 0)
        {
            continue;
        }
        else
        {
            avg += bitrates.at(i);
            count++;
        }
    }
    if (count == 0)
    {

        return 0.0;
    }
    return static_cast<double>(avg / count);
}

int main()
{
    vector<int> bitrates{-4500, -100, -6000, -5200, 0, 99999, 4800};
    cout << averageValidBitrate(bitrates) << '\n';
    return 0;
}