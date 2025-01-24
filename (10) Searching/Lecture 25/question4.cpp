// Q4 There is an integer array nums sorted in non-decreasing order (not necessarily with 
// distinct values).
// Before being passed to your function, nums is rotated at an unknown pivot index k ( 0 <= k 
// < nums.length ) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], 
// nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example,
// [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become
// [4,5,6,6,7,0,1,2,4,4] .
// Given the array nums after the rotation and an integer target , return true if target is in
// nums , or false if it is not in nums .
// You must decrease the overall operation steps as much as possible.
// Example 1:
// Input: nums = [2,5,6,0,0,1,2], target = 0
// Output: true
// Example 2:
// Input: nums = [2,5,6,0,0,1,2], target = 3
// Output: false


#include <iostream>
#include <vector>
using namespace std;

bool searchRotatedArray(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if the middle element is the target
        if (nums[mid] == target) {
            return true;
        }

        // Handle duplicates
        if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
            low++;
            high--;
            continue;
        }

        // Determine which half is sorted
        if (nums[low] <= nums[mid]) { // Left half is sorted
            if (nums[low] <= target && target < nums[mid]) {
                high = mid - 1; // Target in the left half
            } else {
                low = mid + 1; // Target in the right half
            }
        } else { // Right half is sorted
            if (nums[mid] < target && target <= nums[high]) {
                low = mid + 1; // Target in the right half
            } else {
                high = mid - 1; // Target in the left half
            }
        }
    }

    return false; // Target not found
}

int main() {
    vector<int> nums1 = {2, 5, 6, 0, 0, 1, 2};
    int target1 = 0;
    cout << "Target " << target1 << " in nums1: " << (searchRotatedArray(nums1, target1) ? "true" : "false") << endl;

    vector<int> nums2 = {2, 5, 6, 0, 0, 1, 2};
    int target2 = 3;
    cout << "Target " << target2 << " in nums2: " << (searchRotatedArray(nums2, target2) ? "true" : "false") << endl;

    return 0;
}
