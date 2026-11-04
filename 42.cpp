#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool hasOppositePair(const vector<int>& nums) {
    // Write your code here!
    unordered_map<int, int> seen;
    for ( auto &n : nums )  {
        int needed = -n;
        if ( seen.count(needed) > 0 )   {
            return 1;
        } else {
            seen[n] = 0;
        }
    }
    return 0;
}

int main ()  {
    vector<int> nums {4, -2, 9, 0, -2};
    cout << hasOppositePair(nums) << '\n';
    return 0;
}