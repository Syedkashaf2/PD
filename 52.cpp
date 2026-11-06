#include <iostream>
using namespace std;

class Player
{
  public:
    int health;
    int score;

    // Normal 2-argument Constructor:
    Player(int h, int s) : health(h), score(s)
    {
    }
};

int main()
{
    Player p1(100, 50); // Calls normal constructor: p1 has health=100, score=50
    Player p2 = p1;     // Copy Constructor! Copies p1's health (100) and score (50) into p2
    Player p3(p1);      // Also Copy Constructor! Same thing, just using () syntax

    p2.health = 20; // Modifying p2 does NOT change p1 (independent copy!)
    cout << p1.health << " " << p2.health << " " << p3.health << "\n"; // Prints: 100 20 100
    return 0;
}