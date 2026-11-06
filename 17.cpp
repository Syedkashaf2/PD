#include <iostream>
#include <vector>
using namespace std;

vector<double> applyTaxToValidPrices(const vector<double> &prices, double tax_rate)
{
    // Write your code here
    vector<double> final_prices{};

    for (auto p : prices)
    {
        if (p > 0)
        {
            final_prices.push_back(p + p * tax_rate);
        }
    }
    return final_prices;
}

int main()
{
    double tax_rate{0.10};
    vector<double> prices{100.0, -20.0, 50.0, 0.0, 200.0};

    for (auto n : applyTaxToValidPrices(prices, tax_rate))
    {
        cout << n << ' ';
    }
    cout << '\n';

    return 0;
}