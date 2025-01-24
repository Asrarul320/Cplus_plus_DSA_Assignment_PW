// // 1= Calculate the product of all the elements in the given array.

#include <iostream>
using namespace std;
int main() {
    int n;

    // Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    long long product = 1; // Use long long to handle large products

    // Input array elements
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calculate the product
    for (int i = 0; i < n; i++) {
        product *= arr[i];
    }

    // Output the result
    cout << "The product of all the elements in the array is: " << product << endl;

    return 0;
}
