#include <iostream>
using namespace std;

int sumWithPointers(const int *p, int n) {
    // Write your loop using *(p + i) here
    int sum{};
    for ( int i{}; i < n; i++ ) {
        sum += *( p + i );
    }
    return sum;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    cout << sumWithPointers(arr, 5) << '\n'; // Expected: 150
    return 0;
}