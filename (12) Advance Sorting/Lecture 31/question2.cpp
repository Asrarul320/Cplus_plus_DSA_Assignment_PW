// Q2 Reverse Pairs (Leetcode Problem) : Given an integer array nums, return the number of reverse 
// pairs in the array.
// A reverse pair is a pair (i, j) where:
// 0 <= i < j < nums.length and
// nums[i] > 2 * nums[j].


#include <iostream>
#include <vector>
using namespace std;

// Function to count reverse pairs and merge the two halves
int mergeAndCount(vector<int>& nums, int left, int mid, int right) {
    int count = 0;
    int j = mid + 1;

    // Count the reverse pairs
    for (int i = left; i <= mid; i++) {
        while (j <= right && nums[i] > 2LL * nums[j]) { // 2LL ensures long long multiplication
            j++;
        }
        count += (j - mid - 1);
    }

    // Merge the two sorted halves
    vector<int> temp;
    int i = left, k = mid + 1;

    while (i <= mid && k <= right) {
        if (nums[i] <= nums[k]) {
            temp.push_back(nums[i++]);
        } else {
            temp.push_back(nums[k++]);
        }
    }

    while (i <= mid) {
        temp.push_back(nums[i++]);
    }

    while (k <= right) {
        temp.push_back(nums[k++]);
    }

    for (int p = left; p <= right; p++) {
        nums[p] = temp[p - left];
    }

    return count;
}

// Recursive function to implement merge sort and count reverse pairs
int mergeSortAndCount(vector<int>& nums, int left, int right) {
    if (left >= right) return 0;

    int mid = left + (right - left) / 2;

    // Count pairs in left half, right half, and across both halves
    int count = mergeSortAndCount(nums, left, mid);
    count += mergeSortAndCount(nums, mid + 1, right);
    count += mergeAndCount(nums, left, mid, right);

    return count;
}

// Main function to count reverse pairs
int reversePairs(vector<int>& nums) {
    return mergeSortAndCount(nums, 0, nums.size() - 1);
}

int main() {
    // Input array
    vector<int> nums = {1, 3, 2, 3, 1};

    // Count and print reverse pairs
    int result = reversePairs(nums);
    cout << "Number of reverse pairs: " << result << endl;

    return 0;
}
