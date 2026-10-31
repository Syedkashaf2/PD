#include <iostream>
#include <string>
using namespace std;

string cleanSignal(const string& signal) {
    // 1. Create an empty string result{};
    string result{};

    // 2. Loop through each char c in signal: for (char c : signal)
    for (char c : signal)   {

        // 3. If c is between 'A' and 'Z' inclusive (c >= 'A' && c <= 'Z'),
        //    append it to result using result.push_back(c); (or result += c;)
        if (c >= 'A' && c <= 'Z') result.push_back(c);
    }
    // 4. Return result.
    return result;
}

int main()  {
    string signal {"lllllllllKeeeeAeeSehhhhhhhhhhhHeIemmmmmmmmmF"};
    signal = cleanSignal(signal);

    cout << signal << '\n';
    return 0;
}