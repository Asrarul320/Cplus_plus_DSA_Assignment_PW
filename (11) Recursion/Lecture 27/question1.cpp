// Q1 Write a program to calculate the sum of odd numbers between a and b (both inclusive) using recursion.



#include <iostream>
using namespace std;

// Function to calculate the sum of odd numbers between a and b using recursion
int sumOfOddNumbers(int a, int b) {
    // Base case: If a > b, return 0 (no odd numbers left to sum)
    if (a > b) {
        return 0;
    }

    // If 'a' is odd, include it in the sum, otherwise, just move to the next number
    if (a % 2 != 0) {
        return a + sumOfOddNumbers(a + 1, b); // Include a and recurse with a+1
    } else {
        return sumOfOddNumbers(a + 1, b); // Skip the even number and recurse with a+1
    }
}

int main() {
    int a, b;

    // Input: Start and end of the range
    cout << "Enter the values of a and b: ";
    cin >> a >> b;

    // Call the function and display the result
    int result = sumOfOddNumbers(a, b);
    cout << "Sum of odd numbers between " << a << " and " << b << " is: " << result << endl;

    return 0;
}
