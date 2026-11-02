#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> scores;
    scores["Kashaf"] = 95;
    scores["Ali"] = 88;

    int myScore = scores["Kashaf"];
    cout << myScore << "\n"; // Bug 1 (from line 23 of your 1-100/hashMaps.cpp!)

    // Intended to print: "Student Kashaf scored 95" for each entry
    for (const auto &pair : scores) {
        cout << "Student " << pair.first << " scored " << pair.second << "\n"; // Bug 2
    }
    return 0;
}