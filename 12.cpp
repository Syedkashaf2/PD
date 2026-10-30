#include <climits>
#include <vector>
#include <iostream>
using namespace std;

int secondLargest(const vector<int>& nums) {
    int large{INT_MIN};
    int slarge{INT_MIN};

    for (size_t i{}; i < nums.size(); i++) {
            if ( nums[i] > large ) {
                slarge = large;
                large = nums[i];
            } else if ( nums[i] < large && slarge < nums[i] ) {
                slarge = nums[i];
            }
        }
        return slarge;
    }

int main()  {
    vector<int> a {50, 40, 30, 40, 20};
    cout << secondLargest(a) << '\n';
    return 0;
}