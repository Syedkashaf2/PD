#include <iostream>
#include <vector>
using namespace std;

int sumMainDiagonal(const vector<vector<int>> &mat)
{
    int sum{};
    for (size_t i{}; i < mat.size() && i < mat[i].size(); i++)
    {
        sum += mat[i][i];
    }
    return sum;
}

int main()
{
    vector<vector<int>> mat{{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    cout << sumMainDiagonal(mat) << '\n';
    return 0;
}