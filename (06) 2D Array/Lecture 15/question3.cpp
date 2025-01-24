// Q3 Write a program to print the matrix in wave form.
// Input :
// 1 2 3
// 4 5 6
// 7 8 9
// Output : 7 4 1 2 5 8 9 6 3


#include <iostream>
using namespace std;

void printWave(int arr[4][4], int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        // If the column index is even, print top to bottom
        if (j % 2 == 0) {
            for (int i = 0; i < rows; i++) {
                cout << arr[i][j] << " ";
            }
        }
        // If the column index is odd, print bottom to top
        else {
            for (int i = rows - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }
}

int main() {
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int rows = 4, cols = 4;

    cout << "Matrix in wave form: \n";
    printWave(arr, rows, cols);

    return 0;
}
