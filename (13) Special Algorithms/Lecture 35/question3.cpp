// Q3 Given an array where all its elements are sorted in increasing order except two swapped 
// elements, sort it in linear time. Assume there are no duplicates in the array.
// Input: A[] = [3, 8, 6, 7, 5, 9, 10]
// Output: A[] = [3, 5, 6, 7, 8, 9, 10]


#include <iostream>
#include <vector>
using namespace std;

void swapTwoElements(vector<int>& arr) {
    int n = arr.size();
    int first = -1, second = -1;

    // Find the first and second violations
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            first = i;
            break;
        }
    }

    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            second = i;
            break;
        }
    }

    // Swap the elements at the two positions
    if (first != -1 && second != -1) {
        swap(arr[first], arr[second]);
    }
}

int main() {
    vector<int> arr = {3, 8, 6, 7, 5, 9, 10};
    
    swapTwoElements(arr);
    
    // Output the sorted array
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
