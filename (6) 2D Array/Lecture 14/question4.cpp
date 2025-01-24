// Q4: Write a C++ program to find the largest element of a given 2D array of integers.
// Input 1:
// 1 3 4 6
// 2 4 5 7
// 3 5 6 8
// 4 6 7 9
// Output 1: 9


#include <iostream>
#include <vector>
#include <limits.h> // For INT_MIN
using namespace std;

int main() {
    int rows, cols;

    // Input dimensions of the 2D array
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    vector<vector<int>> arr(rows, vector<int>(cols));

    // Input elements of the 2D array
    cout << "Enter the elements of the 2D array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Initialize the largest element with the smallest possible integer
    int largest = INT_MIN;

    // Find the largest element
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }

    // Output the largest element
    cout << "The largest element in the 2D array is: " << largest << endl;

    return 0;
}
