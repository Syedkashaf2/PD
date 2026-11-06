#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

double trimmedAverage(vector<int> scores)
{
    // Write your code here (without writing any manual for-loops!)
    double avg{};
    if (scores.size() <= 2)
    {
        return 0;
    }

    sort(scores.begin(), scores.end());
    avg = accumulate(scores.begin() + 1, scores.end() - 1, 0.0) / (scores.size() - 2);

    return avg;
}

int main()
{
    vector<int> scores{10, 50, 20, 30, 100};
    cout << trimmedAverage(scores) << '\n';
}