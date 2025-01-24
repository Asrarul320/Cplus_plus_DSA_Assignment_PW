// Q1 Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
// You must do it in place.
// Input : 
// 1 1 1
// 1 0 1
// 1 1 1
// Output : 
// 1 0 1
// 0 0 0
// 1 0 1


#include <iostream>
using namespace std;

void setZeroes(int matrix[][4], int m, int n) {
    bool firstRowZero = false, firstColZero = false;

    // Check if first row has any zero
    for (int j = 0; j < n; j++) {
        if (matrix[0][j] == 0) {
            firstRowZero = true;
            break;
        }
    }

    // Check if first column has any zero
    for (int i = 0; i < m; i++) {
        if (matrix[i][0] == 0) {
            firstColZero = true;
            break;
        }
    }

    // Mark zeros in the first row and column
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;  // Mark the first column of the row
                matrix[0][j] = 0;  // Mark the first row of the column
            }
        }
    }

    // Set matrix cells to 0 based on the marks in the first row and column
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }

    // Set first row to 0 if needed
    if (firstRowZero) {
        for (int j = 0; j < n; j++) {
            matrix[0][j] = 0;
        }
    }

    // Set first column to 0 if needed
    if (firstColZero) {
        for (int i = 0; i < m; i++) {
            matrix[i][0] = 0;
        }
    }
}

void printMatrix(int matrix[][4], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 0, 6, 7},
        {8, 9, 0, 11},
        {12, 13, 14, 15}
    };

    int m = 4, n = 4;

    cout << "Original Matrix:\n";
    printMatrix(matrix, m, n);

    setZeroes(matrix, m, n);

    cout << "\nMatrix after setting zeroes:\n";
    printMatrix(matrix, m, n);

    return 0;
}
