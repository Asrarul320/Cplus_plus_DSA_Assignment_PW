// Q3: Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the 
// rectangle from (l1,r1) to (l2, r2).
// Input 1:
// 1 2 -3 4
// 0 0 -4 2
// 1 -1 2 3
// -4 -5 -7 0
// l1 = 1, r1 = 2 , l2 = 3 , r2 = 3
// Output 1: -4
// Input 2:
// 1 2 -3 4
// 0 0 -4 2
// 1 -1 2 3
// -4 -5 -7 0
// l1 = 1, r1 = 0 , l2 = 0 , r2 = 3
// Output 1: 2


#include <iostream>
#include <vector>
using namespace std;

int rectangleSum(const vector<vector<int>>& A, int l1, int r1, int l2, int r2) {
    int sum = 0;

    // Iterate through the sub-matrix and calculate the sum
    for (int i = l1; i <= l2; i++) {
        for (int j = r1; j <= r2; j++) {
            sum += A[i][j];
        }
    }

    return sum;
}

int main() {
    int n, m;
    cout << "Enter the dimensions of the matrix (n x m): ";
    cin >> n >> m;

    vector<vector<int>> A(n, vector<int>(m));

    // Input matrix elements
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    int l1, r1, l2, r2;
    cout << "Enter the top-left corner (l1, r1): ";
    cin >> l1 >> r1;
    cout << "Enter the bottom-right corner (l2, r2): ";
    cin >> l2 >> r2;

    // Calculate and display the sum of the rectangle
    int result = rectangleSum(A, l1, r1, l2, r2);
    cout << "The sum of the rectangle from (" << l1 << ", " << r1 << ") to ("
         << l2 << ", " << r2 << ") is: " << result << endl;

    return 0;
}
