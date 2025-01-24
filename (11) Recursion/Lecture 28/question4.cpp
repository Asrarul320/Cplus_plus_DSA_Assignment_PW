// Q4 Given an array of integers, print a sum triangle using recursion from it such that the first level has 
// all array elements. After that, at each level the number of elements is one less than the previous
// level and elements at the level will be the sum of consecutive two elements in the previous level.
// So, if sample input is [5, 4, 3, 2, 1], sample output will be:
// [5, 4, 3, 2, 1]
// [9, 7, 5, 3]
// [16, 12, 8]
// [28, 20]
// [48]


#include <iostream>
#include <vector>
using namespace std;

// Function to print the array
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Recursive function to generate and print the sum triangle
void sumTriangle(vector<int>& arr) {
    // Print the current level
    printArray(arr);

    // If only one element is left, stop recursion
    if (arr.size() == 1) return;

    // Create a new array for the next level
    vector<int> nextLevel;
    
    // Generate the next level by summing consecutive elements
    for (int i = 0; i < arr.size() - 1; i++) {
        nextLevel.push_back(arr[i] + arr[i + 1]);
    }
    
    // Recursively call for the next level
    sumTriangle(nextLevel);
}

int main() {
    // Input the array
    vector<int> arr = {5, 4, 3, 2, 1};
    
    // Call the function to print the sum triangle
    sumTriangle(arr);

    return 0;
}
