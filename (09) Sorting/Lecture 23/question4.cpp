// Q4 Find the minimum operations required to sort the array in increasing order. In one operation , you can set each occurrence of one element to 0


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the length of the longest increasing subsequence (LIS)
int findLISLength(vector<int>& arr) {
    int n = arr.size();
    vector<int> lis(n, 1);  // Initialize LIS array with 1 as every element is at least an LIS of length 1

    // Calculate LIS for each element
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j]) {
                lis[i] = max(lis[i], lis[j] + 1);
            }
        }
    }

    // Return the maximum length of LIS
    return *max_element(lis.begin(), lis.end());
}

// Function to find the minimum operations required to sort the array
int minOperationsToSort(vector<int>& arr) {
    int lisLength = findLISLength(arr);
    int n = arr.size();
    
    // Minimum operations = Total elements - Length of LIS
    return n - lisLength;
}

int main() {
    vector<int> arr = {5, 2, 8, 6, 3, 6, 7, 4};  // Example array
    cout << "Minimum operations required: " << minOperationsToSort(arr) << endl;
    return 0;
}
