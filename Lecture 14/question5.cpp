// Q5: Write a program to print the row number having the maximum sum in a given matrix.
// Input 1:
// 1 3 5 7
// 3 4 7 8
// 1 4 12 3
// Output 1: 2
// Explanation : The 2nd row has the maximum sum i.e. 1+4+12+3 = 20


#include <iostream>
#include <vector>
#include <climits> // Include this for INT_MIN and INT_MAX
using namespace std;

int main() {
    int rows, cols;

    // Input the dimensions of the matrix
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    // Input elements of the matrix
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int maxSum = INT_MIN; // Initialize to the smallest possible integer
    int maxRow = -1;

    // Calculate the sum of each row and find the maximum sum
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }

        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxRow = i;
        }
    }

    // Output the row number with the maximum sum
    cout << "The row with the maximum sum is row " << maxRow + 1 
         << " (1-based indexing) with a sum of " << maxSum << "." << endl;

    return 0;
}
