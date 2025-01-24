// Q4 There are n flights that are labeled from 1 to n .
// You are given an array of flight bookings bookings , where bookings[i] = [firsti, lasti, 
// seatsi] represents a booking for flights firsti through lasti (inclusive) with seatsi
// seats reserved for each flight in the range.
// Return an array answer of length n , where answer[i] is the total number of seats reserved 
// for flight i . [Leetcode 1109]
// Example 1:
// Input: bookings = [[1,2,10],[2,3,20],[2,5,25]], n = 5
// Output: [10,55,45,25,25]
// Explanation:
// Flight labels: 1 2 3 4 5
// Booking 1 reserved: 10 10
// Booking 2 reserved: 20 20
// Booking 3 reserved: 25 25 25 25
// Total seats: 10 55 45 25 25
// Hence, answer = [10,55,45,25,25]
// Example 2:
// Input: bookings = [[1,2,10],[2,2,15]], n = 2
// Output: [10,25]
// Explanation:
// Flight labels: 1 2
// Booking 1 reserved: 10 10
// Booking 2 reserved: 15
// Total seats: 10 25
// Hence, answer = [10,25]


#include <iostream>
#include <vector>
using namespace std;

vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
    vector<int> answer(n + 1, 0);  // Initialize a vector of size n + 1 for difference array
    
    // Process all bookings
    for (auto& booking : bookings) {
        int first = booking[0] - 1;  // Adjust for 0-based index
        int last = booking[1];       // No need to adjust for the last flight index
        int seats = booking[2];
        
        // Apply the difference array technique
        answer[first] += seats;
        if (last < n) {
            answer[last] -= seats;
        }
    }
    
    // Calculate the prefix sum to get the actual seats reserved for each flight
    for (int i = 1; i < n; i++) {
        answer[i] += answer[i - 1];
    }
    
    // Return the result without the extra last element
    return vector<int>(answer.begin(), answer.begin() + n);
}

int main() {
    // Test case 1
    vector<vector<int>> bookings1 = {{1, 2, 10}, {2, 3, 20}, {2, 5, 25}};
    int n1 = 5;
    vector<int> result1 = corpFlightBookings(bookings1, n1);
    for (int val : result1) {
        cout << val << " ";  // Output: 10 55 45 25 25
    }
    cout << endl;

    // Test case 2
    vector<vector<int>> bookings2 = {{1, 2, 10}, {2, 2, 15}};
    int n2 = 2;
    vector<int> result2 = corpFlightBookings(bookings2, n2);
    for (int val : result2) {
        cout << val << " ";  // Output: 10 25
    }
    cout << endl;

    return 0;
}
