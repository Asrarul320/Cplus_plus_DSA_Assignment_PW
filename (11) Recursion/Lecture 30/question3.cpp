// Q3 Given a string, find the length of the longest common substring from two given strings.


#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to find the length of the longest common substring
int longestCommonSubstring(string s1, string s2) {
    int n = s1.length();
    int m = s2.length();

    // DP table to store the lengths of common substrings
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    int maxLength = 0; // To store the maximum length of common substring

    // Fill the DP table
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                maxLength = max(maxLength, dp[i][j]);
            } else {
                dp[i][j] = 0; // Reset if characters do not match
            }
        }
    }

    return maxLength;
}

int main() {
    // Input strings
    string s1 = "abcde";
    string s2 = "abfce";

    // Find and print the length of the longest common substring
    int result = longestCommonSubstring(s1, s2);
    cout << "Length of the longest common substring: " << result << endl;

    return 0;
}
