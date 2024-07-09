#include <iostream>
using namespace std;

int main() {
    int matrix[5][5];
    int oneRow, oneCol;
    
    // Read the matrix and find the position of the number 1
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                oneRow = i;
                oneCol = j;
            }
        }
    }
    
    // Calculate the Manhattan distance to the center (2, 2) in 0-based index
    int moves = abs(oneRow - 2) + abs(oneCol - 2);
    cout << moves << endl;

    return 0;
}
