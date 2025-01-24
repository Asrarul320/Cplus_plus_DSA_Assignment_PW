// Q1 Write a recursive function to reverse a number. Avoid preceding 0s in the reversed number.


#include <iostream>
using namespace std;

// Recursive function to reverse a number
int reverseNumber(int n, int reversed = 0) {
    // Base case: If the number becomes 0, return the reversed number
    if (n == 0) {
        return reversed;
    }
    
    // Recursive case: reverse the remaining part of the number
    return reverseNumber(n / 10, reversed * 10 + (n % 10));
}

int main() {
    int num;
    
    // Input the number
    cout << "Enter a number: ";
    cin >> num;
    
    // Call the recursive function and output the result
    cout << "Reversed number: " << reverseNumber(num) << endl;
    
    return 0;
}
