// // 5= WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.

#include <iostream>
using namespace std;

int findSmallestMissingPositive(int arr[], int n) {
    int expected = 1; // Start with the smallest positive integer

    for (int i = 0; i < n; i++) {
        if (arr[i] == expected) {
            expected++; // Move to the next expected positive integer
        } else if (arr[i] > expected) {
            // If the current array value is greater than expected, the expected number is missing
            break;
        }
    }
    return expected;
}

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the number of elements in the sorted array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " positive elements of the sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find and display the smallest missing positive element
    int missing = findSmallestMissingPositive(arr, n);
    cout << "The smallest missing positive element is: " << missing << endl;

    return 0;
}
