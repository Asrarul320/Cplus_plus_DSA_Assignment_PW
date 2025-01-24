// Q3 Given an integer array nums of length n where all the integers of nums are in the range [1, 
// n] and each integer appears once or twice, return an array of all the integers that appears 
// twice.
// You must write an algorithm that runs in O(n) time and uses only constant extra space.
 
// [Leetcode 442]
// Example 1:
// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [2,3]
// Example 2:
// Input: nums = [1,1,2]
// Output:Example 3:
// Input: nums = [1]
// Output: []


#include <iostream>
#include <vector>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    vector<int> result;
    
    for (int i = 0; i < nums.size(); ++i) {
        int num = abs(nums[i]);
        
        // If the number at index num-1 is negative, it means num has appeared before
        if (nums[num - 1] < 0) {
            result.push_back(num);
        } else {
            // Otherwise, negate the number at index num-1 to mark it as visited
            nums[num - 1] = -nums[num - 1];
        }
    }
    
    return result;
}

int main() {
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> duplicates = findDuplicates(nums);
    
    cout << "Duplicates: ";
    for (int num : duplicates) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
