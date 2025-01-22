// // 2= Find the factorial of a large number.


#include <iostream>
#include <vector>
using namespace std;

// Function to multiply a number with an array (represents a large number)
void multiply(vector<int>& result, int num) {
    int carry = 0;

    for (int i = 0; i < result.size(); i++) {
        int product = result[i] * num + carry;
        result[i] = product % 10; // Store the last digit
        carry = product / 10;    // Carry over the remaining digits
    }

    // Add remaining carry to the result
    while (carry) {
        result.push_back(carry % 10);
        carry /= 10;
    }
}

// Function to compute factorial of a large number
void factorial(int n) {
    vector<int> result; // Vector to store the result digits
    result.push_back(1); // Initialize result as 1

    for (int i = 2; i <= n; i++) {
        multiply(result, i); // Multiply each number from 2 to n
    }

    // Print the result in reverse order (as digits are stored in reverse)
    cout << "Factorial of " << n << " is: ";
    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i];
    }
    cout << endl;
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        factorial(n);
    }

    return 0;
}
