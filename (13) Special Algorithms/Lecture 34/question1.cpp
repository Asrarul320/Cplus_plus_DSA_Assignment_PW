// Q1 Calculate the sum of the elements of nums between indices left and right inclusive where
// left <= right .
// Implement the NumArray class:
// NumArray(int[] nums) Initializes the object with the integer array nums .
// int sumRange(int left, int right) Returns the sum of the elements of nums between 
// indices left and right inclusive (i.e. nums[left] + nums[left + 1] + ... + 
// nums[right] ). [Leetcode 303]
// Example 1:
// Input
// ["NumArray", "sumRange", "sumRange", "sumRange"]
// [[[-2, 0, 3, -5, 2, -1]], [0, 2], [2, 5], [0, 5]]
// Output
// [null, 1, -1, -3]
// Explanation
// NumArray numArray = new NumArray([-2, 0, 3, -5, 2, -1]);
// numArray.sumRange(0, 2); // return (-2) + 0 + 3 = 1
// numArray.sumRange(2, 5); // return 3 + (-5) + 2 + (-1) = -1
// numArray.sumRange(0, 5); // return (-2) + 0 + 3 + (-5) + 2 + (-1) = -3


#include <iostream>
#include <vector>
using namespace std;

class NumArray {
private:
    vector<int> prefix;

public:
    // Constructor to initialize the prefix sum array
    NumArray(vector<int>& nums) {
        int n = nums.size();
        prefix.resize(n + 1, 0);  // Initialize a prefix sum array of size n+1
        
        // Compute the prefix sum array
        for (int i = 0; i < n; ++i) {
            prefix[i + 1] = prefix[i] + nums[i];
        }
    }

    // Function to return the sum of elements between indices left and right inclusive
    int sumRange(int left, int right) {
        return prefix[right + 1] - prefix[left];  // Calculate the sum using the prefix sum array
    }
};

int main() {
    // Example Usage:
    vector<int> nums = {-2, 0, 3, -5, 2, -1};
    
    // Create an object of NumArray
    NumArray numArray(nums);

    // Test the sumRange queries and print results
    cout << numArray.sumRange(0, 2) << endl;  // Output: 1
    cout << numArray.sumRange(2, 5) << endl;  // Output: -1
    cout << numArray.sumRange(0, 5) << endl;  // Output: -3

    return 0;
}
