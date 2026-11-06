#include <iostream>
#include <vector>
using namespace std;

vector<int> collectPrimesUpTo(int limit)
{
    // 1. Create an empty vector<int> primes;
    vector<int> primes;
    int count{};
    // 2. Loop i from 2 up to limit (i <= limit).
    for (int i{2}; i <= limit; i++)
    {

        bool is_prime{true};
        for (int j{2}; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
        {
            primes.push_back(i);
            // cout << primes.size() << '\n';
        }
    }
    return primes;
}

int main()
{
    vector<int> prime = collectPrimesUpTo(20);
    cout << prime.size() << '\n';
    for (size_t i{}; i < prime.size(); i++)
    {
        cout << "primes : " << prime.at(i) << '\n';
    }
    return 0;
}