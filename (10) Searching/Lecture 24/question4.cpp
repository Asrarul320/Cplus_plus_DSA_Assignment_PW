// Q4 Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] 
// inclusive in sorted order.
// There is only one repeated number in nums, return this repeated number.
// Input 1: arr[] = {1,2,3,3,4}
// Output 1: 3
// Input 2: arr[] = {1,2,2,3,4,5}
// Output 2: 2


#include <iostream>
using namespace std;

int findDuplicate(int arr[], int n) {
    int low = 1, high = n - 1; // The range of numbers is [1, n-1]

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Count numbers <= mid
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] <= mid) {
                count++;
            }
        }

        if (count > mid) {
            // If count > mid, the duplicate is in the range [low, mid]
            high = mid - 1;
        } else {
            // Otherwise, it's in the range [mid+1, high]
            low = mid + 1;
        }
    }

    // The duplicate number
    return low;
}

int main() {
    int arr1[] = {1, 2, 3, 3, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Duplicate number: " << findDuplicate(arr1, n1) << endl;

    int arr2[] = {1, 2, 2, 3, 4, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Duplicate number: " << findDuplicate(arr2, n2) << endl;

    return 0;
}
