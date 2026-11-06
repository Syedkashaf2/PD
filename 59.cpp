#include <iostream>
#include <vector>
using namespace std;

long long buggyRangeSum(const vector<int>& nums, int left, int right) {
    int n = nums.size();
    vector<long long> prefix(n + 1, 0);

    for (int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] +  nums[i]; // Bug 1 is on this line!
    }

    /*
    for ( auto &n : prefix )    {
        cout << n << '\t';
    }
    cout << '\n';
    */

    return prefix[right + 1] - prefix[left]; // Bug 2 is on this line!
}

int main()  {
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    cout << buggyRangeSum(nums, 2, 4) << '\n';
}