#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int countWordsAppearingExactlyTwice(const vector<string>& words) {
    // Write your code here from your own mind!
    unordered_map< string, int > group;

    for ( const auto &n : words )   {
        if ( group.count(n) >  0 )   {
            group[n] ++;
        } else {
            group[n] = 1;
        }   
    }
    int count{};
    for ( auto n : group )    {
        cout << n.first << '\t';
        cout << n.second << '\n';
        if ( n.second == 2 )
          count++;
        }

    return count;

}

int main()  {
    vector<string> words {"cat", "dog", "cat", "bird", "dog", "V2", "dog", "bird"};
    cout << countWordsAppearingExactlyTwice(words) << '\n';

}