#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int sumOfEvenDigits(int num)
{
    // Write your code here
    if (num < 0)
    {
        num = -num;
    }

    int rem{}, dig{}, sum{};
    // temp = num;
    while (num > 0)
    {
        rem = num % 10;
        if (rem % 2 == 0)
        {
            sum += rem;
        }
        num /= 10;
    }
    return sum;
}

int main()
{
    cout << "Sum : " << sumOfEvenDigits(482353) << '\n';
    return 0;
}