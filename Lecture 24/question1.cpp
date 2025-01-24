// Q1 Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’ 
// does not exist return -1.
// Input 1: arr[] = {1,2,3,3,4,4,4,5} , x = 4
// Output 1: 6


#include <iostream>
using namespace std;

int findLastOccurrence(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            result = mid; // Update result and continue searching to the right
            low = mid + 1;
        } else if (arr[mid] < x) {
            low = mid + 1; // Move right
        } else {
            high = mid - 1; // Move left
        }
    }

    return result;
}

int main() {
    int arr[] = {1, 2, 3, 3, 4, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 4;

    int lastOccurrence = findLastOccurrence(arr, n, x);

    if (lastOccurrence != -1) {
        cout << "The last occurrence of " << x << " is at index: " << lastOccurrence << endl;
    } else {
        cout << x << " does not exist in the array." << endl;
    }

    return 0;
}
