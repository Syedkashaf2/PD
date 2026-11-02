#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int firstUniqueNumber(const vector<int>& nums) {
    // Step 1: Create unordered_map<int, int> freq;
    unordered_map<int, int> freq;

    // Step 2: Loop through nums (for (int n : nums)) and increment freq[n]++;
    for (int n : nums)    {
        freq[n]++;
    }
    // Step 3: Loop through nums a SECOND time (for (int n : nums)):
    //         if (freq[n] == 1), immediately return n!
    for (int n : nums)  {
        if(freq[n] == 1 )   {
            return n;
        }
    }
    // Step 4: If the second loop finishes without finding any unique number, return -1.
    return -1;
}

int main()  {
    vector<int> nums {4, 5, 1, 2, 0, 4, 5, 2};
    cout << firstUniqueNumber(nums) << '\n';

    return 0;
}