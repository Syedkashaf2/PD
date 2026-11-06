#include <iostream>
#include <vector>
using namespace std;

int pSum(vector<int> &nums)  {
    int n = nums.size();
    vector<int> prefix (n + 1, 0);

    for ( int i{}; i < n; i++ )   {
        prefix[ i + 1 ] = prefix[i] + nums[i];
    }

    for ( int i{}; i < prefix.size(); i++ )   {
            if (prefix[i] == prefix[n] - prefix[i + 1]) {
            return i;
        }
    }
    return -1;
}

int main()  {
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    cout << pSum(nums) << '\n';
}