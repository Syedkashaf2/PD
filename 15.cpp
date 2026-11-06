#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> row = {10, 20, 30};
    vector<vector<int>> grid;
    grid.push_back(row);

    for (auto x : row)
    {
        x = x * 10;
    }
    for (auto &x : row)
    {
        x = x + 5;
    }

    cout << "row: " << row.at(0) << " " << row.at(1) << " " << row.at(2) << "\n";
    cout << "grid[0][0]: " << grid.at(0).at(0) << "\n";
    row.pop_back();
    cout << "sizes: " << row.size() << " " << grid.at(0).size() << "\n";
    return 0;
}