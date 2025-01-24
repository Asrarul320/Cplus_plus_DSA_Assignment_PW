// Given an array, arr[] containing n integers, the task is to find an integer (say K) such that after replacing each and every index of the array by |ai – K| where ( i ∈ [1, n]), results in a sorted array. If no such integer exists that satisfies the above condition then return -1.




#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to check if the transformed array is sorted in increasing order
bool isSorted(const vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

// Function to find the integer K such that after transforming the array, it becomes sorted
int findKForSortedArray(vector<int>& arr) {
    int n = arr.size();
    
    // Try each element in the array as a candidate for K
    for (int i = 0; i < n; i++) {
        int K = arr[i];  // Choose K as arr[i]
        
        // Transform the array using |ai - K|
        vector<int> transformedArr(n);
        for (int j = 0; j < n; j++) {
            transformedArr[j] = abs(arr[j] - K);
        }

        // Check if the transformed array is sorted
        if (isSorted(transformedArr)) {
            return K;  // Return the K that works
        }
    }

    return -1;  // No valid K found
}

int main() {
    vector<int> arr = {3, 8, 2, 5, 4};  // Example array
    int result = findKForSortedArray(arr);
    
    if (result != -1) {
        cout << "The value of K is: " << result << endl;
    } else {
        cout << "No such K exists" << endl;
    }
    
    return 0;
}
