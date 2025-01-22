// // 6= Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.


#include <iostream>
using namespace std;

int findUnique(int arr[], int size) {
    int unique = 0;
    for (int i = 0; i < size; i++) {
        unique ^= arr[i]; // XOR all elements
    }
    return unique;
}

int main() {
    int arr[] = {2, 3, 5, 4, 5, 3, 4}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    int uniqueNumber = findUnique(arr, size);

    cout << "The unique number is: " << uniqueNumber << endl;

    return 0;
}
