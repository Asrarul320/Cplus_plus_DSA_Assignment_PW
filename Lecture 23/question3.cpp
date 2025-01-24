// Q3 Given an integer array and an integer k where k<=size of array, We need to return the kth 
// smallest element of the array.


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

int quickSelect(vector<int>& arr, int low, int high, int k) {
    if (low <= high) {
        int pi = partition(arr, low, high);
        
        if (pi == k) {
            return arr[pi];
        }
        else if (pi < k) {
            return quickSelect(arr, pi + 1, high, k);
        } else {
            return quickSelect(arr, low, pi - 1, k);
        }
    }
    return -1; // k is out of bounds (this shouldn't happen in normal cases)
}

int findKthSmallest(vector<int>& arr, int k) {
    return quickSelect(arr, 0, arr.size() - 1, k - 1); // k-1 because index starts from 0
}

int main() {
    vector<int> arr = {12, 3, 5, 7, 19, 1, 8};
    int k = 4;
    cout << "The " << k << "-th smallest element is: " << findKthSmallest(arr, k) << endl;
    return 0;
}
