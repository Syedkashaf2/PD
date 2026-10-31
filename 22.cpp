#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

string normalizeText(const string& s)   {
    string result{};
    for ( size_t c : s )    {
        if (isalnum(static_cast<unsigned char>(c)))    {
            result.push_back(static_cast<unsigned char>(tolower(static_cast<unsigned char>(c))));
        }
    }
    return result;
}

int main()  {

    string s {"A man, a plan, a canal: Panama!"};
    cout << normalizeText(s) << '\n';
    return 0;
}


