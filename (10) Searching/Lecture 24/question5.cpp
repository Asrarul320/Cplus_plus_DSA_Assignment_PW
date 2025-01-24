// Q5 Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.
// Input 1: n = 36
// Output 1: yes
// Input 2: n = 45
// Output 2: no



#include <iostream>
using namespace std;

bool isPerfectSquare(int n) {
    if (n < 0) {
        return false; // Negative numbers can't be perfect squares
    }

    long long low = 1, high = n;

    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long square = mid * mid;

        if (square == n) {
            return true; // Found a perfect square
        } else if (square < n) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }

    return false; // Not a perfect square
}

int main() {
    int n1 = 36;
    int n2 = 45;

    cout << "Is " << n1 << " a perfect square? " << (isPerfectSquare(n1) ? "Yes" : "No") << endl;
    cout << "Is " << n2 << " a perfect square? " << (isPerfectSquare(n2) ? "Yes" : "No") << endl;

    return 0;
}
