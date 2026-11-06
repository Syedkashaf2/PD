#include <iostream>
#include <string>
using namespace std;

class Weapon
{
  private:
    string type;
    int damage;

  public:
    Weapon() : type("Sword"), damage(15)
    {
    }
    Weapon(string t) : type(t), damage(25)
    {
    }
    Weapon(string t, int d) : type(t), damage(d)
    {
    }

    void show() const
    {
        cout << type << ": " << damage << "\n";
    }
};

int main()
{
    Weapon w1;
    Weapon w2("Bow");
    Weapon w3("Axe", 50);
    w1.show();
    w2.show();
    w3.show();
    return 0;
}