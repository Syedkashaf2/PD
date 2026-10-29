#include <iostream>
using namespace std;

// Returns true if a 3-digit number equals the sum of cubes of its digits (e.g., 153 = 1^3 + 5^3 + 3^3)
bool isArmstrong3(int num) {
    if (num < 100 || num > 999) return false;
    int temp{num}; // Preserve original num for final comparison!
    int sum{};
    while (temp > 0) {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    return sum == num;
}

int decimalToOctal(int num) {
    int temp{num};
    int oct{};
    int place{1}; // Tracks 1, 10, 100, 1000... in the output representation
    while (temp > 0) {
        int rem = temp % 8;       // Remainder in base 8 (0 to 7)
        oct += rem * place;       // Put remainder in current decimal column
        place *= 10;              // Shift to next column
        temp /= 8;                // Divide by base 8
    }
    return oct;
}

bool isNumberPalindrome(int num) {
    int temp {num};
    if (num < 0) return false;
    long long rev{0};
    while (num > 0) {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    num = temp;
    //cout << "Num : " << num << " | " << "Rev : " << " | " << rev << '\n';
    return (num == rev);
}

int main() {
    cout << isNumberPalindrome(12233221) << '\n';
}