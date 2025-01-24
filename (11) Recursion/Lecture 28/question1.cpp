// Q1 Print all the elements of an array in reverse order.



#include <iostream>
using namespace std;

// Function to print array elements in reverse order
void printReverse(int arr[], int n) {
    // Start from the last element and move backward
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    
    // Input the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    
    // Input the array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call function to print array in reverse order
    cout << "Array elements in reverse order: ";
    printReverse(arr, n);

    return 0;
}
