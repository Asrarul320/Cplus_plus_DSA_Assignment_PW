// Q4 Program to find the factorial of a given number.


#include <iostream>
using namespace std;

// Function to calculate factorial using recursion
long long factorialRecursive(int n) {
    if (n == 0 || n == 1) { // Base case
        return 1;
    }
    return n * factorialRecursive(n - 1); // Recursive step
}

int main() {
    int n;

    // Input from the user
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers!" << endl;
    } else {
        long long result = factorialRecursive(n);
        cout << "Factorial of " << n << " is: " << result << endl;
    }

    return 0;
}
