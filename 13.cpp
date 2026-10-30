#include <iostream>
#include <vector>
using namespace std;

vector<int> computeColumnTotals(const vector<vector<int>>& mat) {
   
    // 1. If mat is empty, return {}.
    if ( mat.size() == 0 ) {return {};}
    // 2. Let rows = mat.size() and cols = mat[0].size().
    int rows = mat.size(); int cols = mat[0].size();
    // 3. Create vector<int> col_totals(cols, 0); (a vector of size 'cols' filled with 0s, like in revision/11.cpp!)
    vector<int> col_totals(cols, 0);
    // 4. Use nested loops over row i and col j to add mat[i][j] into col_totals[j].
    for( int i{}; i < rows; i++ ) {
         for( int j{}; j < cols; j++ ) {
            col_totals[j] += mat[i][j];
        }
    }
    // 5. Return col_totals.
    return col_totals;
}

int main()  {
    vector<vector<int>> ratings {
    {5, 6, 4},
    {6, 7, 8}
    };
        return 0;
}