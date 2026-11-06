#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, string> registry;
    registry["Player1"] = "Alive";
    registry["Player2"] = "Dead";

    cout << registry.size() << " -> "; // Prints: 2

    // THE BRACKET TRAP!
    // Just by checking registry["Player3"], C++ silently INSERTS "Player3"
    // with an empty string "" into the map!
    if (registry["Player3"] == "Dead")
    {
        cout << "Player3 is Dead -> ";
    }
    else
    {
        cout << "Player3 is Unknown -> ";
    }

    // Look at the size now: it grew from 2 to 3 by accident!
    cout << registry.size() << "\n"; // Prints: 3!

    // SAFE WAY (Does NOT insert "Player3"!):
    if (registry.count("Player4") > 0)
    {
        cout << "Player4 status: " << registry["Player4"] << "\n";
    }
    else
    {
        cout << "Player4 is not in the map!\n";
    }
    // registry.size() stays 2!
    return 0;
}