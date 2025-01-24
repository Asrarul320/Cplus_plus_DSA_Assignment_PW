// Q2 Calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or 3 steps at each level.


#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the number of ways to climb n stairs
int countWays(int n) {
    // Base case: If n is less than or equal to 0, return 0 (no way to climb)
    if (n <= 0) return 0;

    // dp[i] will store the number of ways to reach the i-th stair
    vector<int> dp(n + 1, 0);

    // Initializing base cases
    dp[0] = 1; // 1 way to stay at the ground
    if (n >= 1) dp[1] = 1; // 1 way to reach the first stair
    if (n >= 2) dp[2] = 2; // 2 ways to reach the second stair
    if (n >= 3) dp[3] = 4; // 4 ways to reach the third stair

    // Fill dp array for all stairs from 4 to n
    for (int i = 4; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3]; // Total ways from previous 3 steps
    }

    return dp[n]; // Return the result for n stairs
}

int main() {
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;

    // Call the function and display the result
    int result = countWays(n);
    cout << "The number of ways to climb " << n << " stairs is: " << result << endl;

    return 0;
}
