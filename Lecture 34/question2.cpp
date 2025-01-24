// Q2 Given an array of integers nums , calculate the pivot index of this array.
// The pivot index is the index where the sum of all the numbers strictly to the left of the index is 
// equal to the sum of all the numbers strictly to the index s right.
// If the index is on the left edge of the array, then the left sum is 0 because there are no elements 
// to the left. This also applies to the right edge of the array.
// Return the leftmost pivot index. If no such index exists, return -1 . [Leetcode 724]
// Example 1:
// Input: nums = [1,7,3,6,5,6]
// Output: 3
// Explanation:
// The pivot index is 3.
// Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
// Right sum = nums[4] + nums[5] = 5 + 6 = 11
// Example 2:
// Input: nums = [1,2,3]
// Output: -1
// Explanation:
// There is no index that satisfies the conditions in the problem statement.
// Example 3:
// Input: nums = [2,1,-1]
// Output: 0
// Explanation:
// The pivot index is 0.
// Left sum = 0 (no elements to the left of index 0)
// Right sum = nums[1] + nums[2] = 1 + -1 = 0


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total_sum = 0;
        int left_sum = 0;
        
        // Calculate total sum of the array
        for (int num : nums) {
            total_sum += num;
        }

        // Iterate through the array and check for the pivot index
        for (int i = 0; i < nums.size(); i++) {
            // Right sum is total sum minus left sum and the current element
            if (left_sum == total_sum - left_sum - nums[i]) {
                return i; // Found the pivot index
            }
            
            // Update left sum for the next iteration
            left_sum += nums[i];
        }
        
        return -1; // No pivot index found
    }
};

int main() {
    Solution solution;
    
    // Test case 1
    vector<int> nums1 = {1, 7, 3, 6, 5, 6};
    cout << solution.pivotIndex(nums1) << endl; // Output: 3
    
    // Test case 2
    vector<int> nums2 = {1, 2, 3};
    cout << solution.pivotIndex(nums2) << endl; // Output: -1
    
    // Test case 3
    vector<int> nums3 = {2, 1, -1};
    cout << solution.pivotIndex(nums3) << endl; // Output: 0

    return 0;
}
