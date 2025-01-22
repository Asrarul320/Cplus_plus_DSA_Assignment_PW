// // 4= Given an array, predict if the array contains duplicates or not

#include <iostream>
#include <unordered_set>
using namespace std;

bool containsDuplicates(int arr[], int n) {
    unordered_set<int> seen;

    for (int i = 0; i < n; i++) {
        // Check if the element is already in the set
        if (seen.find(arr[i]) != seen.end()) {
            return true; // Duplicate found
        }
        // Add the element to the set
        seen.insert(arr[i]);
    }

    return false; // No duplicates found
}

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be greater than 0." << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Check for duplicates
    if (containsDuplicates(arr, n)) {
        cout << "The array contains duplicates." << endl;
    } else {
        cout << "The array does not contain duplicates." << endl;
    }

    return 0;
}