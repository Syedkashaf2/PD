#include <iostream>
#include <string>
using namespace std;

class Session {
private:
    string user;
public:
    int active_minutes;
    Session(string u, int m) : user(u), active_minutes(m) {}

    // FIXED Bug 1: Why does this destructor fail to compile?
    // Should have no parimeters.
    ~Session() {
        cout << "Closing session for " << user << "\n";
    }
};

// FIXED Bug 2: Intended to be a member function of Session, or access private members
//Private members cant be accessed from the main().
int main() {
    Session s1("Kashaf", 45);
    Session s2 = s1;
    s2.active_minutes = 10; // FIXED Bug 2: Why does this line fail to compile?
                            // was trying to access a private variable we should have that as a public to do so.
    return 0;
}