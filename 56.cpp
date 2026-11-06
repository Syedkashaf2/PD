#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums{2, 4, -1, 5, 2};
    int n = nums.size(); // n = 5

    // Create a prefix vector of size n + 1 (6 slots), initialized to all 0s:
    vector<long long> prefix(n + 1, 0);

    for (int i{}; i < n; i++) {
        prefix[i + 1] = prefix[i] + nums[i];
    }
    return 0;
}