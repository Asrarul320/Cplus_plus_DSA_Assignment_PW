// Q1: Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.


#include <iostream>
using namespace std;

int main() {
    const int rows = 5;
    const int cols = 5;
    int matrix[rows][cols];

    // Storing 10 at every index
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = 10;
        }
    }

    // Displaying the matrix
    cout << "The 2D matrix is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
