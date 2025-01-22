// // 3= Find the minimum value out of all elements in the array.

#include <iostream>
#include <climits> // For INT_MAX
using namespace std;

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

    int minValue = INT_MAX;

    // Find the minimum value
    for (int i = 0; i < n; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
        }
    }

    // Output the result
    cout << "The minimum value in the array is: " << minValue << endl;

    return 0;
}
