// Q1 Write a program to apply binary search in array sorted in decreasing order


#include <iostream>
using namespace std;

int binarySearchInDecreasingOrder(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; // Target found
        } else if (arr[mid] < target) {
            high = mid - 1; // Move to the left half
        } else {
            low = mid + 1; // Move to the right half
        }
    }

    return -1; // Target not found
}

int main() {
    int arr[] = {100, 90, 80, 70, 60, 50, 40}; // Sorted in decreasing order
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 70;

    int result = binarySearchInDecreasingOrder(arr, n, target);
    if (result != -1) {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found in the array" << endl;
    }

    return 0;
}
