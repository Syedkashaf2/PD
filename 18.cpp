#include <iostream>
#include <vector>
using namespace std;

void transformScoresInPlace(vector<int>& scores) {
    // Write a range-based for loop using a REFERENCE (auto &s : scores)
    for ( auto &s : scores )    {
        // If s is even (s % 2 == 0), multiply s by 2 in-place.
        if ( s % 2 == 0 ) s *= 2;
        // If s is odd, add 1 to s in-place.
        else s += 1;
    }
}

int main()  {
    vector<int> scores {3, 4, 7, 10};
    transformScoresInPlace(scores);
    for ( auto n : scores )  {
        cout << n << ' ';
    }
    cout << '\n';
    return 0;
}