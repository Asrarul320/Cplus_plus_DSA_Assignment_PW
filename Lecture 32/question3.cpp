// Q3 Given an array where all its elements are sorted in increasing order except two swapped elements, sort it in linear time. Assume there are no duplicates in the array.
// Input: A[] = [3, 8, 6, 7, 5, 9, 10]
// Output: A[] = [3, 5, 6, 7, 8, 9, 10]



#include <iostream>
#include <vector>
using namespace std;

void sortSwappedArray(vector<int>& arr) {
    int n = arr.size();
    
    int first = -1, second = -1;
    
    // Step 1: Find the two swapped elements
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            if (first == -1) {
                first = i;
            } else {
                second = i + 1;
            }
        }
    }

    // If we found the first element, the second element will be found by the time we reach the end
    if (second == -1) {
        second = first + 1;
    }

    // Step 2: Swap the two elements
    swap(arr[first], arr[second]);
}

int main() {
    vector<int> arr = {3, 8, 6, 7, 5, 9, 10};
    
    sortSwappedArray(arr);
    
    // Print the sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
