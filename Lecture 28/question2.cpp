// Q2 Print index of a given element in an array. If not present, print -1.


#include <iostream>
using namespace std;

// Function to find the index of a given element in the array
int findIndex(int arr[], int n, int target) {
    // Iterate through the array
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return the index if element is found
        }
    }
    return -1; // Return -1 if element is not found
}

int main() {
    int n, target;

    // Input the size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    
    // Input the array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the target element
    cout << "Enter the element to find: ";
    cin >> target;

    // Call function to find the index and display the result
    int index = findIndex(arr, n, target);
    
    // Print the result
    if (index != -1) {
        cout << "Element " << target << " is at index " << index << endl;
    } else {
        cout << "Element " << target << " is not present in the array." << endl;
    }

    return 0;
}
