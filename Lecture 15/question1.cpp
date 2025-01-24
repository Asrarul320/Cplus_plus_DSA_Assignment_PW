// Q1 Write a program to print the elements of both the diagonals in a square matrix.
// Input 1:
// 1 2 3 
// 4 5 6
// 7 8 9
// Output 1: 
// 1 3
//  5
// 7 9

#include <iostream>
using namespace std;

void printDiagonals(int arr[][100], int size) {
    cout << "Primary Diagonal: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i][i] << " ";  // Print the primary diagonal (top-left to bottom-right)
    }
    cout << endl;

    cout << "Secondary Diagonal: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i][size - 1 - i] << " ";  // Print the secondary diagonal (top-right to bottom-left)
    }
    cout << endl;
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

    // Call the function to print diagonals
    printDiagonals(arr, size);

    return 0;
}
