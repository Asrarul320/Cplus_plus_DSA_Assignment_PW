// // 7= If an array arr contains n elements, then check if the given array is a palindrome or not .


#include <iostream>
using namespace std;

bool isPalindrome(int arr[], int size) {
    int start = 0, end = size - 1;

    while (start < end) {
        if (arr[start] != arr[end]) {
            return false; // Not a palindrome if elements at start and end differ
        }
        start++;
        end--;
    }
    return true; // Array is a palindrome
}

int main() {
    int arr[] = {1, 2, 3, 2, 1}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    if (isPalindrome(arr, size)) {
        cout << "The array is a palindrome." << endl;
    } else {
        cout << "The array is not a palindrome." << endl;
    }

    return 0;
}
