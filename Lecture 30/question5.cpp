// Q5 Program to convert a decimal number to binary


#include <iostream>
using namespace std;

// Function to convert decimal to binary using recursion
void decimalToBinaryRecursive(int n) {
    if (n == 0) {
        return;
    }
    decimalToBinaryRecursive(n / 2); // Recursive call with n / 2
    cout << (n % 2);                 // Print remainder
}

int main() {
    int num;

    // Input from the user
    cout << "Enter a decimal number: ";
    cin >> num;

    if (num < 0) {
        cout << "Enter a non-negative number!" << endl;
    } else if (num == 0) {
        cout << "Binary: 0" << endl;
    } else {
        cout << "Binary: ";
        decimalToBinaryRecursive(num);
        cout << endl;
    }

    return 0;
}
