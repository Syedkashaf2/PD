#include <iostream>
#include <string>
#include <vector>
using namespace std;

// leetCode/392.cpp:
bool isSubsequence(const string &s, const string &t)
{
    size_t i = 0; // Pointer for target 's'
    size_t j = 0; // Pointer for main string 't'

    while (i < s.length() && j < t.length())
    {
        if (s[i] == t[j])
        {
            i++; // Matched current char of 's'! Increase 'i' to next char of 's'
        }
        j++; // Always increase 'j' along 't'
    }
    return (i == s.length());
}

int main()
{
    string s = "ace";
    string t = "abcde";
    cout << isSubsequence(s, t) << '\n';
    return 0;
}