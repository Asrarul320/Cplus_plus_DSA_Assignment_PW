// Q5 Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort 
// and display the sorted array


#include <iostream>
#include <vector>
#include <string>
using namespace std;

void bubbleSortStrings(vector<string>& arr) {
    int n = arr.size();
    // Bubble Sort algorithm
    for (int i = 0; i < n - 1; i++) {
        // Last i elements are already sorted, so we can skip them
        for (int j = 0; j < n - 1 - i; j++) {
            // Compare adjacent strings
            if (arr[j] > arr[j + 1]) {
                // Swap the strings if they are in the wrong order
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    vector<string> arr = {"banana", "apple", "grape", "cherry", "date"}; // Example array of strings
    
    bubbleSortStrings(arr);
    
    cout << "Sorted array of strings: " << endl;
    for (const string& str : arr) {
        cout << str << " ";
    }
    cout << endl;
    
    return 0;
}
