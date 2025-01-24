// Q2 Given a sorted binary array, efficiently count the total number of 1’s in it.
// Input 1 : a = [0,0,0,0,1,1]
// Output 1: 2


#include <iostream>
using namespace std;

int countOnes(int arr[], int n) {
    int low = 0, high = n - 1;
    int firstOneIndex = -1;

    // Binary search to find the first occurrence of 1
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == 1) {
            firstOneIndex = mid;  // Update first occurrence
            high = mid - 1;       // Continue searching in the left half
        } else {
            low = mid + 1;        // Move to the right half
        }
    }

    // If no 1's are found, return 0
    if (firstOneIndex == -1) {
        return 0;
    }

    // Total number of 1's = n - firstOneIndex
    return n - firstOneIndex;
}

int main() {
    int arr[] = {0, 0, 0, 0, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int totalOnes = countOnes(arr, n);
    cout << "Total number of 1's: " << totalOnes << endl;

    return 0;
}
