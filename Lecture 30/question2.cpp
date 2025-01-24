// Q2 Given an integer array which may contain duplicate numbers, return power set, containing all the subsets of the set.
//  [Leetcode 90]


#include <iostream>
#include <vector>
#include <algorithm> // For sorting
using namespace std;

// Helper function to generate subsets using backtracking
void generateSubsetsWithDup(vector<int>& nums, vector<int>& current, int index, vector<vector<int>>& result) {
    // Add the current subset to the result
    result.push_back(current);

    // Iterate through the elements starting from index
    for (int i = index; i < nums.size(); i++) {
        // Skip duplicate elements
        if (i > index && nums[i] == nums[i - 1]) {
            continue;
        }
        // Include nums[i] in the current subset
        current.push_back(nums[i]);
        // Recur for the next element
        generateSubsetsWithDup(nums, current, i + 1, result);
        // Backtrack and remove nums[i]
        current.pop_back();
    }
}

// Main function to generate the power set
vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>> result; // To store all subsets
    vector<int> current;       // Current subset
    // Sort the array to handle duplicates
    sort(nums.begin(), nums.end());
    // Generate subsets
    generateSubsetsWithDup(nums, current, 0, result);
    return result;
}

int main() {
    // Input array
    vector<int> nums = {1, 2, 2};

    // Generate power set
    vector<vector<int>> powerSet = subsetsWithDup(nums);

    // Print the power set
    cout << "Power set with duplicates:" << endl;
    for (const auto& subset : powerSet) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
