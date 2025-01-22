// // 1= Count the number of elements strictly greater than x.

#include <iostream>
using namespace std;

int countGreaterThanX(int arr[], int n, int x) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > x) {
            count++; // Increment count if the element is strictly greater than x
        }
    }

    return count;
}

int main() {
    int n, x;

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

    // Input the value of x
    cout << "Enter the value of x: ";
    cin >> x;

    // Count and display the result
    int result = countGreaterThanX(arr, n, x);
    cout << "The number of elements strictly greater than " << x << " is: " << result << endl;

    return 0;
}
