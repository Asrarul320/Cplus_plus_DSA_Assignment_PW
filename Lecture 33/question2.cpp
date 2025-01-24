// Q2 You have a set of integers s , which originally contains all the numbers from 1 to n . 
// Unfortunately, due to some error, one of the numbers in s got duplicated to another number 
// in the set, which results in repetition of one number and loss of another number.
// You are given an integer array nums representing the data status of this set after the error.
// Find the number that occurs twice and the number that is missing and return them in the form 
// of an array. [Leetcode 645]
// Example 1:
// Input: nums = [1,2,2,4]
// Output: [2,3]
// Example 2:
// Input: nums = [1,1]
// Output: [1,2]


#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> findDuplicateAndMissing(vector<int>& nums) {
    int n = nums.size();
    
    // Calculate sum and sum of squares for the given array
    long long sum_nums = 0, sum_squares_nums = 0;
    for (int num : nums) {
        sum_nums += num;
        sum_squares_nums += (long long)num * num;
    }

    // Calculate sum and sum of squares for the original array [1, 2, ..., n]
    long long sum_of_n = (long long)n * (n + 1) / 2;
    long long sum_of_squares_of_n = (long long)n * (n + 1) * (2 * n + 1) / 6;

    // Find the differences
    long long sum_diff = sum_of_n - sum_nums; // missing - duplicate
    long long squares_diff = sum_of_squares_of_n - sum_squares_nums; // missing^2 - duplicate^2

    // Now use these to find the missing and duplicate numbers
    // missing^2 - duplicate^2 = (missing - duplicate)(missing + duplicate)
    long long sum_plus_diff = squares_diff / sum_diff;
    
    int missing = (int)((sum_diff + sum_plus_diff) / 2);
    int duplicate = (int)(sum_plus_diff - missing);
    
    return {duplicate, missing};
}

int main() {
    vector<int> nums = {1, 2, 2, 4};
    vector<int> result = findDuplicateAndMissing(nums);
    
    cout << "Duplicate: " << result[0] << ", Missing: " << result[1] << endl;
    return 0;
}
