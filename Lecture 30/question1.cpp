// Q1 Given an integer array containing unique numbers, return power set, containing all the subsets of 
// the set.
// [Leetcode 78]


#include <iostream>
#include <vector>
using namespace std;

// Helper function to generate subsets using backtracking
void generateSubsets(vector<int>& nums, vector<int>& current, int index, vector<vector<int>>& result) {
    // Add the current subset to the result
    result.push_back(current);

    // Iterate through the remaining elements
    for (int i = index; i < nums.size(); i++) {
        // Include nums[i] in the current subset
        current.push_back(nums[i]);
        // Recur for the next element
        generateSubsets(nums, current, i + 1, result);
        // Backtrack and remove nums[i]
        current.pop_back();
    }
}

// Main function to generate the power set
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> result; // To store all subsets
    vector<int> current;       // Current subset
    generateSubsets(nums, current, 0, result);
    return result;
}

int main() {
    // Input array
    vector<int> nums = {1, 2, 3};

    // Generate power set
    vector<vector<int>> powerSet = subsets(nums);

    // Print the power set
    cout << "Power set:" << endl;
    for (const auto& subset : powerSet) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
