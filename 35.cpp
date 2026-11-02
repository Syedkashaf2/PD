#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int getItemPrice(const unordered_map<string, int>& menu, const string& item) {
    // Write your code here
    auto it = menu.find(item);
    if (it != menu.end()) {
        return it->second ;
    } else {
        return -1;
    }

}

int main()  {
     unordered_map<string, int> menu;
     menu["Burger"] = 150;
     menu["Tea"] = 20;

     cout << getItemPrice(menu, "Tea") << '\n';
     cout << getItemPrice(menu, "Pizza") << '\n';
    return 0;
}