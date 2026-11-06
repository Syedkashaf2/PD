#include <iostream>
using namespace std;

class Player {
private:          // Locked vault: ONLY functions inside class Player can touch these!
    int health{};
    int score{};

public:           // Public buttons: main() is allowed to call these!
    void setHealth(int h) {
        if (h < 0) {
            health = 0; // Safety rule: health can never become negative!
        } else {
            health = h;
        }
    }

    void takeDamage(int damage) {
        setHealth(health - damage); // Reuses our safe setHealth rule!
    }

    int getHealth() const {
        return health; // Read-only button so main() can see health safely
    }
}; // <-- Notice: a class definition ALWAYS ends with a semicolon ';'!

int main() {
    Player p1;          // Creates object 'p1' from the Player blueprint
    // p1.health = 100; // COMPILER ERROR! 'health' is private!
    p1.setHealth(100);  // Allowed! Sets p1's health to 100
    p1.takeDamage(30);  // Allowed! Reduces p1's health to 70
    cout << p1.getHealth() << "\n"; // Prints: 70
    return 0;
}