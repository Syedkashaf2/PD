#include <iostream>
#include <string>
#include <vector>
// #include <iostream>
using namespace std;

bool anagram(string s, string t)
{
    vector<int> count(26, 0);

    if (s.size() != t.size())
    {
        return 0;
    }

    for (size_t i{}; i < s.size(); i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (auto n : count)
    {
        if (n != 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    string s{"apple"};
    string t{"elppa"};

    anagram(s, t);

    return 0;
}
