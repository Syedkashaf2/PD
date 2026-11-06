#include <iostream>
using namespace std;

int main()
{

    int x{2}, y(3.6);
    int temp{};
    // cin >> x >> y;
    while (y != 0)
    {
        temp = y;
        y = x % y;
        x = temp;
    }
    cout << "GCD : " << x << '\n';
    return 0;
}