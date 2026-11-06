#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    // Declare a map where the Key is a string (name) and Value is an int (age)
    unordered_map<string, int> ages;

    // 1. INSERT new keys using square brackets [] — O(1) time
    ages["Kashaf"] = 19;
    ages["Ali"] = 22;

    // 2. READ a value using its key — O(1) time
    cout << "Kashaf's age: " << ages["Kashaf"] << "\n"; // Prints: 19
    cout << "Ali's age: " << ages["Ali"] << "\n";       // Prints: 22

    // 3. UPDATE an existing key — O(1) time
    // Because "Kashaf" already exists in the map, this overwrites 19 with 20!
    ages["Kashaf"] = 20;
    cout << "Updated age: " << ages["Kashaf"] << "\n";      // Prints: 20
    cout << "Total people in map: " << ages.size() << "\n"; // Prints: 2
    return 0;
}