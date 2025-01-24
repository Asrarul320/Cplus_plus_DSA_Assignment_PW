// Q2 Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
// Input : str = "2947578"
// Output : 8
// Input : str = "1241"
// Output : 2


#include <iostream>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;

int findSecondLargestDigit(const string &str) {
    int largest = INT_MIN, secondLargest = INT_MIN;

    for (char c : str) {
        if (isdigit(c)) { // Check if the character is a digit
            int digit = c - '0'; // Convert character to integer
            if (digit > largest) {
                secondLargest = largest; // Update second largest
                largest = digit;         // Update largest
            } else if (digit > secondLargest && digit < largest) {
                secondLargest = digit;  // Update second largest
            }
        }
    }

    return secondLargest; // Return second largest digit
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int result = findSecondLargestDigit(str);
    if (result == INT_MIN) {
        cout << "No valid second largest digit found." << endl;
    } else {
        cout << "Second largest digit: " << result << endl;
    }

    return 0;
}
