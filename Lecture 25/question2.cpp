// Q2 You have a sorted array of infinite numbers, how would you search an element in the array?


#include <iostream>
#include <climits>
using namespace std;

// Function to perform binary search within a given range
int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; // Target found
        } else if (arr[mid] < target) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }
    return -1; // Target not found
}

// Function to find the target in an infinite sorted array
int searchInfiniteArray(int arr[], int target) {
    // Start with a range of size 2
    int low = 0, high = 1;

    // Expand the range until the target is less than or equal to arr[high]
    while (arr[high] < target) {
        low = high;        // Update the lower bound
        high = 2 * high;   // Double the range size
        if (high >= INT_MAX) break; // Handle very large arrays (simulate infinite)
    }

    // Perform binary search in the identified range
    return binarySearch(arr, low, high, target);
}

int main() {
    // Example of an "infinite" sorted array (simulated here)
    int arr[] = {1, 3, 5, 7, 9, 11, 15, 20, 25, 30, 35, 40, 45, 50};
    int target = 25;

    int result = searchInfiniteArray(arr, target);

    if (result != -1) {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found in the array" << endl;
    }

    return 0;
}
