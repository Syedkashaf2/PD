#include <iostream>
using namespace std;

int main()
{
    int row1 = 2, col1 = 3, row2 = 3, col2 = 2;
    int a[row1][col1] = {{1, 2, 3}, {4, 5, 6}};
    int b[row2][col2] = {{2, 0}, {1, 3}, {4, 1}}, c[row1][col2];

    for (int i{}; i < row1; i++)
    {
        for (int j{}; j < col2; j++)
        {
            // c[i][j] = 0;
            for (int k{}; k < col1; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
                if ((i == 1 && j == 1) || (i == 0 & j == 0) || (i == 2) && (j == 2))
                {
                    cout << "FOR K = " << k << "  " << a[i][j] << '\n';
                }
            }
        }
    }
    return 0;
}