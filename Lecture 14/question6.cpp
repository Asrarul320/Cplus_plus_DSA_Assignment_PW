// Q6: Write a function which accepts a 2D array of integers and its size as arguments and displays the 
// elements of middle row and the elements of middle column.
// [Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]
// Input 1:
// 1 2 3 4 5
// 3 4 5 6 7
// 7 6 5 4 3
// 8 7 6 5 4
// 1 2 9 8 0
// Output 1:
//     3
//     5
// 7 6 5 4 3
//     6
//     9


#include <iostream>
using namespace std;

void displayMiddleRowAndColumn(int arr[][100], int size) {
    int mid = size / 2; // Calculate the middle index

    // Print the elements above the middle row for the middle column
    for (int i = 0; i < mid; i++) {
        cout << "  " << arr[i][mid] << endl;
    }

    // Print the middle row elements horizontally
    for (int j = 0; j < size; j++) {
        cout << arr[mid][j] << " ";
    }
    cout << endl;

    // Print the elements below the middle row for the middle column
    for (int i = mid + 1; i < size; i++) {
        cout << "  " << arr[i][mid] << endl;
    }
}


int main() {
    int size;

    // Input size of the matrix
    cout << "Enter the size of the square matrix (odd dimension): ";
    cin >> size;

    if (size % 2 == 0) {
        cout << "Please enter an odd dimension." << endl;
        return 1;
    }

    int arr[100][100];

    // Input the matrix elements
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> arr[i][j];
        }
    }

    // Call the function to display the middle row and column in the desired format
    displayMiddleRowAndColumn(arr, size);

    return 0;
}
