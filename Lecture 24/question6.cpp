// Q6 You have n coins and you want to build a staircase with these coins. The staircase consists of k 
// rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.
// Given the integer n, return the number of complete rows of the staircase you will build.
// Example 1:
// Input: n = 5
// Output: 2
// Explanation: Because the 3rd row is incomplete, we return 2.
// Example 2:
// Input: n = 8
// Output: 3
// Explanation: Because the 4th row is incomplete, we return 3.

#include <iostream>
using namespace std;

int completeRows(int n) {
    int low = 0, high = n;
    int result = 0;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long sum = (mid * (mid + 1)) / 2; // Sum of first 'mid' rows

        if (sum <= n) {
            result = mid; // Update result as we found a valid row
            low = mid + 1; // Try for more rows
        } else {
            high = mid - 1; // Reduce rows
        }
    }

    return result;
}

int main() {
    int n1 = 5;
    int n2 = 8;

    cout << "Input: n = " << n1 << "\nOutput: " << completeRows(n1) << endl;
    cout << "Input: n = " << n2 << "\nOutput: " << completeRows(n2) << endl;

    return 0;
}
