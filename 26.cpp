#include <iostream>
using namespace std;

// FIXED Bug 1 is in this function signature:
void addBonus(int &score, int bonus) {
    score = score + bonus;
}

// FIXED Bug 2 is inside this function body:
void resetViaPointer(int *ptr) {
    *ptr = 0; // Intended to set the caller's integer variable to 0!
}

int main() {
    int player_score{100};
    addBonus(player_score, 25);
    cout << "After bonus: " << player_score << "\n"; // Output: 125

    resetViaPointer(&player_score);
    cout << "After reset: " << player_score << "\n"; // Output: 0
    return 0;
}
