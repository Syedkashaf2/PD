#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

bool hasDuplicateWord(const vector<string>& words) {
    unordered_map<string, int> countMap;

    for (const string& w : words) {
        countMap[w]++;          // Increment tally for word 'w'
        if (countMap[w] > 1) {  // Seen more than once!
            return true;
        }
    }
    return false;
}

bool isAnagramMap(const string& s, const string& t) {
    if (s.size() != t.size()) return false;
    unordered_map<char, int> balance;
    for (size_t i{}; i < s.size(); i++) {
        balance[s[i]]++; // String s adds +1
        balance[t[i]]--; // String t subtracts -1
    }
    for (const auto& pair : balance) {
        if (pair.second != 0) return false; // Unbalanced letter!
    }
    return true;
}

int main()  {
    vector<string> words {"apple", "banana", "apple", "cherry"};
    string s {"apple"};
    string t {"elpopa"};


    cout << hasDuplicateWord(words) << '\n';
    cout << isAnagramMap(s, t) << '\n';

    return 0;

}