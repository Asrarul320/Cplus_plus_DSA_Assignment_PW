// // 3= Check if the given array is sorted or not


#include <iostream>
using namespace std;

bool isSorted(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        // If the current element is greater than the next one, the array is not sorted
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, size)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}
