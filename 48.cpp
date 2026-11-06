#include <iostream>
using namespace std;

class BankAccount
{
    int balance;
    int pin;

  public:
    BankAccount(int b, int p) : balance(b), pin(p)
    {
    } // FIXED Bug 1 (access) AND Bug 2 (initializer typo)
    void deposit(int amount)
    {
        balance += amount; // FIXED Bug 3: Does this update the member variable 'balance'?
    }
    int getBalance() const
    {
        return balance;
    }
};

int main()
{
    BankAccount acc(1000, 1234);
    acc.deposit(500);
    cout << acc.getBalance() << "\n"; // Expected to print: 1500
    return 0;
}