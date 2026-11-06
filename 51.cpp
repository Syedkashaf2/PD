#include <iostream>
#include <string>
using namespace std;

class Soldier {
    string name;
public:
    Soldier(string n) : name(n) { cout << name << " is born\n"; }
    ~Soldier()                  { cout << name << " dies.\n"; }
};

void battle() {
    Soldier s2("Bravo"); // 2. 'Bravo' is born inside battle()
}                        // 3. battle() ends at '}' -> 'Bravo' dies IMMEDIATELY before returning to main()!

int main() {
    Soldier s1("Alpha");   // 1. 'Alpha' is born in main()
    battle();              //    Calls battle() -> Bravo is born and dies inside battle()!
    Soldier s3("Charlie"); // 4. 'Charlie' is born in main() (placed on the stack ABOVE Alpha)
    return 0;
} // 5. main() ends at '}' -> Destroy in REVERSE order of creation
// in main(): Charlie dies first, then Alpha dies!