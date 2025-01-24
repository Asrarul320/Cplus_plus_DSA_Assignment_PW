// // 4= Find the difference between the sum of elements at even indices to the sum of elements at odd indices.


#include <iostream>
using namespace std;

int findIndexSumDifference(int arr[], int size) {
    int evenSum = 0, oddSum = 0;

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) { // Check if the index is even
            evenSum += arr[i];
        } else { // Index is odd
            oddSum += arr[i];
        }
    }

    return evenSum - oddSum; // Difference between even-index sum and odd-index sum
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    int difference = findIndexSumDifference(arr, size);

    cout << "The difference between the sum of elements at even indices and odd indices is: " << difference << endl;

    return 0;
}
