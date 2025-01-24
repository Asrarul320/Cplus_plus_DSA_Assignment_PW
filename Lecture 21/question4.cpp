// Q4 Sort the array in descending order using Bubble Sort.

#include <iostream>
using namespace std;

void bubbleSortDescending(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            // Swap if the current element is smaller than the next element
            if (arr[j] < arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    int arr[] = {1, 6, 2, 5, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    bubbleSortDescending(arr, n);
    
    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
