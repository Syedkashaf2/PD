#include <iostream>
#include <vector>
using namespace std;

void loopPrinter(vector<int> &a)
{
    for (size_t i{}; i < a.size(); i++)
    {
        cout << a.at(i) << ' ';
    }
    cout << '\n';
}

void reverseInPlace(vector<int> &a)
{
    size_t n = a.size();
    for (size_t i{}; i < n / 2; i++)
    {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}

int main()
{
    vector<int> a{10, 20, 30, 40, 50};
    loopPrinter(a);
    reverseInPlace(a);
    cout << "=====================\n";
    loopPrinter(a);
    return 0;
}