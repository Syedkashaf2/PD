#include <iostream>
using namespace std;

class Player {
public:
    Player()  { cout << "Player created!\n"; }
    ~Player() { cout << "Player destroyed!\n"; }
};

int main() {
    cout << "Start of main\n";
    {
        Player p1; // <-- Constructor runs HERE!
        cout << "Inside this block\n";
    }              // <-- Closing '}' reached! ~Player() runs RIGHT HERE, BEFORE "End of main"!
    cout << "End of main\n";
    return 0;
}