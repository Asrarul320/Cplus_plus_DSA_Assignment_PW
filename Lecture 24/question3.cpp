// Q3 Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the 
// maximum number of 1’s.
// Input matrix : 0 1 1 1
// 0 0 1 1
// 1 1 1 1 // this row has maximum 1s
// 0 0 0 0
// Output: 2


#include <iostream>
#include <vector>
using namespace std;

int rowWithMaxOnes(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    int maxRowIndex = -1; // To store the index of the row with the maximum 1's
    int j = cols - 1;     // Start from the top-right corner

    for (int i = 0; i < rows; i++) {
        while (j >= 0 && matrix[i][j] == 1) {
            maxRowIndex = i; // Update the row index
            j--;             // Move left in the row
        }
    }

    return maxRowIndex;
}

int main() {
    vector<vector<int>> matrix = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 0}
    };

    int result = rowWithMaxOnes(matrix);

    if (result != -1) {
        cout << "The row with the maximum number of 1's is: " << result << endl;
    } else {
        cout << "No 1's found in the matrix." << endl;
    }

    return 0;
}
