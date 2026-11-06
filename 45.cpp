#include <iostream>
#include <string>
using namespace std;

class Hero
{
  private:
    int level;
    int power;

  public:
    Hero() : level(1), power(10)
    {
        cout << "1st has been called \n";
    } // 1. Default constructor (0 args)
    Hero(int l) : level(l), power(20)
    {
        cout << "2st has been called \n";
    } // 2. 1-argument constructor
    Hero(int l, int p) : level(l), power(p)
    {
        cout << "3st has been called \n";
    } // 3. 2-argument constructor
};

int main()
{
    Hero p1(10, 100);
    return 0;
}