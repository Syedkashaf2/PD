#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> stock;
    stock["Apples"] = 10;
    stock["Oranges"] = 5;

    cout << stock.size() << " | ";
    if (stock["Bananas"] == 0) {
        cout << "Out of Bananas | ";
    }
    if (stock.count("Grapes") > 0) {
        cout << "Has Grapes | ";
    }
    cout << stock.size() << "\n";
    return 0;
}