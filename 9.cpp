#include <iostream>
#include <vector>
using namespace std;

bool isIdentityMatrix(const vector<vector<int>>& mat) {
    int rows = mat.size();
    if (rows == 0) return false;
    int cols = mat[0].size();
    
    // An identity matrix must be perfectly square
    if (rows != cols) return false; 

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == j && mat[i][j] != 1) return false;
            if (i != j && mat[i][j] != 0) return false;
        }
    }
    return true;
}

int main() {
    vector<vector<int>> mat{ 
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    cout << isIdentityMatrix(mat) << '\n'; 
    return 0;
}