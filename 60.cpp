#include <iostream>
#include <vector>
using namespace std;

class RangeAdder {
    vector<long long> prefix;
public:
    RangeAdder(const vector<int>& nums) : prefix(nums.size() + 1, 0) {
        for (int i{}; i < nums.size(); i++ ) {
            prefix[i + 1] = prefix[i] + nums[i];
        }
    }

    long long query(int left, int right) const  {
        return prefix[right + 1] - prefix[left];
    }
};

int main()  {
    vector<int> nums = {10, 20, -5, 15, 30};
    RangeAdder r1 (nums);
    cout << r1.query(0,2) << '\n';
    return 0;
}