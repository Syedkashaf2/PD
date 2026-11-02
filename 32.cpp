#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;


void mostFrequentElement(const vector<int>& nums, int &num, int &occ ) {
    unordered_map<int, int> freq;
    for (int n : nums) {
        freq[n]++; // Step 1: Count frequencies in O(N) time
    }

    int best_num{};
    int max_count{0};
    // Step 2: Loop over the map to find the pair with the largest pair.second!
    for (const auto &pair : freq) {
        if (pair.second > max_count) {
            max_count = pair.second; // New highest frequency
            best_num = pair.first;   // Save the number (Key) that achieved it!
        }
    }
    num = best_num;
    occ = max_count;
    return;
}

int main() {
    int num{};
    int occ{};
     vector<int> nums {10, 20, 30, 40, 20, 20, 20, 30, 40};
     mostFrequentElement(nums, num, occ);
     cout << num << ' ' << occ << '\n';
}