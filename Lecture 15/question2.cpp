// Q2 Write a program to rotate the matrix by 90 degrees anti-clockwise.
// Input 1:
// 1 2 3
// 4 5 6
// 7 8 9
// Output 1:
// 3 6 9
// 2 5 8
// 1 4 7 


#include <iostream>
using namespace std;

void rotateMatrixAntiClockwise(int arr[][100], int size) {
    // Step 1: Transpose the matrix
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            // Swap arr[i][j] with arr[j][i]
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Step 2: Reverse each column to get the anti-clockwise rotation
    for (int j = 0; j < size; j++) {
        int top = 0, bottom = size - 1;
        while (top < bottom) {
            swap(arr[top][j], arr[bottom][j]);
            top++;
            bottom--;
        }
    }
}

void printMatrix(int arr[][100], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int size;

    // Input size of the matrix
    cout << "Enter the size of the square matrix: ";
    cin >> size;

    int arr[100][100];

    // Input the matrix elements
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> arr[i][j];
        }
    }

    // Print the original matrix
    cout << "Original Matrix:" << endl;
    printMatrix(arr, size);

    // Rotate the matrix by 90 degrees anti-clockwise
    rotateMatrixAntiClockwise(arr, size);

    // Print the rotated matrix
    cout << "Matrix after 90 degrees anti-clockwise rotation:" << endl;
    printMatrix(arr, size);

    return 0;
}
