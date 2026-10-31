#include <iostream>
#include <vector>
#include <string>
using namespace std;

int countWordsStartingWith(const vector<string>& words, const string& prefix) {
    int count{};
    for (const string& w : words) {
        if (w.find(prefix) == 0 ) {
            count++;
        }
    }
    return count;
}

int main()  {

    vector<string> words = {"flower", "flow", "flight", "cat"};
    string prefix = "fl";

    return 0;
}