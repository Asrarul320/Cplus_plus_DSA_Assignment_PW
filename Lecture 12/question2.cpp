// // 2= WAP to find the largest three elements in the array.


#include <iostream>
#include <climits>
using namespace std;

void findLargestThree(int arr[], int size) {
    if (size < 3) {
        cout << "Array must contain at least 3 elements." << endl;
        return;
    }

    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    // Traverse the array to find the three largest elements
    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third && arr[i] != second && arr[i] != first) {
            third = arr[i];
        }
    }

    cout << "The largest three elements are: " << first << ", " << second << ", " << third << endl;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    findLargestThree(arr, size);
    
    return 0;
}
