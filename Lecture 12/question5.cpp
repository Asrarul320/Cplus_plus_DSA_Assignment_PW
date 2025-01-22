// // 5=Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.


#include <iostream>
using namespace std;

void modifyArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            // Even index: Increment value by 10
            arr[i] += 10;
        } else {
            // Odd index: Change value to its second multiple
            arr[i] *= 2;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 7, 10, 3, 12, 8}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    modifyArray(arr, size);

    cout << "Modified array: ";
    printArray(arr, size);

    return 0;
}
