#include <iostream>
#include <vector>
using namespace std;

int longestIncreasingStreak(const vector<int>& nums) {
    // 1. If nums is empty, return 0.
    int max_streak {1};
    int current_streak {1};
    if ( nums.size() == 0 ) {
        return 0;
    }
    // 2. Otherwise, what do current_streak and max_streak start at for a non-empty vector?
    // (Hint: a single number like {42} is already a streak of length 1!)
    // 3. Loop from i = 1 to i < nums.size(), comparing nums[i] > nums[i - 1].
    for ( size_t i {1}; i < nums.size(); i++ )    {
        if ( nums[i] > nums[i - 1] )    {
            current_streak++;
        } else {
            current_streak = 0;
        }

        if ( current_streak > max_streak )  {
            max_streak = current_streak;
        }
        // cout << "LOOP " << i << " "<< longestIncreasingStreak << '\n';
        // cout << "LOOP " << i -1 << " "<< longestIncreasingStreak << '\n';
    }
    // 4. Return max_streak.
    return max_streak;
}

int main() {
    vector<int> nums {1};
    cout << longestIncreasingStreak(nums)<< '\n';

    return 0;
}