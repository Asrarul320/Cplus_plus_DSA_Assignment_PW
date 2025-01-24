// Q4 Given an array of digits (values are from 0 to 9), the task is to find the minimum possible sum of 
// two numbers formed from digits of the array. Please note that all digits of the given array must be 
// used to form the two numbers.



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minSum(vector<int>& digits) {
    // Sort the digits in ascending order
    sort(digits.begin(), digits.end());

    // Two numbers to form
    int num1 = 0, num2 = 0;

    // Distribute the digits alternately to form the smallest possible numbers
    for (int i = 0; i < digits.size(); i++) {
        if (i % 2 == 0) {
            num1 = num1 * 10 + digits[i];
        } else {
            num2 = num2 * 10 + digits[i];
        }
    }

    // Return the sum of the two numbers
    return num1 + num2;
}

int main() {
    vector<int> digits = {1, 2, 3, 4, 5, 6};  // Example array of digits
    cout << "Minimum sum of two numbers: " << minSum(digits) << endl;
    return 0;
}
