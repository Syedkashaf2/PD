#include <iostream>
using namespace std;

int main() {
    int data[4] = {10, 20, 30, 40};
    int *p = data;
    *(p + 1) = 50;
    p = p + 3;
    *p = *p - 15;
    p = p - 2;
    cout << *p << " | " << data[0] << " " << data[1]
         << " " << data[2] << " " << data[3] << "\n";
    return 0;
}

