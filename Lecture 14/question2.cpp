// Q2 Write a program to add two matrices and save the result in one of the given matrices.
// Input 1:
// 1 2 3
// 4 5 6
// 7 8 9
// 4 5 8
// 0 0 8
// 1 2 0
// Output 1:
// 5 7 11
// 4 5 14
// 8 10 9


#include <iostream>
using namespace std;

int main() {
    const int rows = 3;
    const int cols = 3;
    int matrix1[rows][cols];
    int matrix2[rows][cols];

    // Input for the first matrix
    cout << "Enter elements of the first matrix (3x3):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Input for the second matrix
    cout << "Enter elements of the second matrix (3x3):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Adding the matrices and storing the result in matrix1
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix1[i][j] += matrix2[i][j];
        }
    }

    // Displaying the resulting matrix
    cout << "The resulting matrix after addition is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
