#include <iostream>
using namespace std;

void printPath(int path[][5], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << path[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void findAllPaths(int mat[][5], int row, int col, int n, int m, int path[][5]) {
    // base case
    if (row == n - 1 && col == m - 1) {
        path[row][col] = 1;
        printPath(path, n, m);
        path[row][col] = 0; // unmark the cell before backtracking
        return;
    }

    // mark the current cell as part of the path
    path[row][col] = 1;

    // moving right
    if (col + 1 < m && mat[row][col + 1] == 0) {
        findAllPaths(mat, row, col + 1, n, m, path);
    }

    // moving bottom
    if (row + 1 < n && mat[row + 1][col] == 0) {
        findAllPaths(mat, row + 1, col, n, m, path);
    }

    // unmark the current cell as it is not part of the solution path
    path[row][col] = 0;
}

int main() {
    int mat[4][5] = { {0, 0, 0, 0, 1}, {0, 1, 1, 0, 0}, {0, 0, 1, 1, 1}, {0, 0, 0, 0, 0} };
    int n = 4;
    int m = 5;
    int path[4][5] = { {0} };  // initialize the path matrix with 0s

    findAllPaths(mat, 0, 0, n, m, path);

    return 0;
}