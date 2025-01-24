// Q3 Given a positive integer, return true if it is a power of 2.


#include <iostream>
using namespace std;

// Function to check if a number is a power of 2
bool isPowerOfTwo(int n) {
    // A number is a power of 2 if it's greater than 0 and (n & (n - 1)) is 0
    return (n > 0) && (n & (n - 1)) == 0;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    // Check if the number is a power of 2 and display the result
    if (isPowerOfTwo(n)) {
        cout << n << " is a power of 2." << endl;
    } else {
        cout << n << " is not a power of 2." << endl;
    }

    return 0;
}
