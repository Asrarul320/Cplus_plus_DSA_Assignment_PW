// Q3 A function countAndSay is defined as:
// countAndSay(1) = “1”
// countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is then 
// converted into a different digit string.
// So, if sample input is n = 4,
// countAndSay(1) = 1
// countAndSay(2) = “one 1” => 11
// countAndSay(3) = “two 1” => 21
// countAndSay(4) = “one 2 one 1” => 1211


#include <iostream>
#include <string>
using namespace std;

// Function to generate the nth term in the count-and-say sequence
string countAndSay(int n) {
    // Base case: countAndSay(1) is "1"
    string result = "1";

    // Generate the sequence for all n greater than 1
    for (int i = 2; i <= n; i++) {
        string temp = "";
        int count = 1;
        
        // Iterate over the previous sequence to count consecutive digits
        for (int j = 1; j < result.length(); j++) {
            if (result[j] == result[j - 1]) {
                count++;
            } else {
                // Append the count and the digit to the new sequence
                temp += to_string(count) + result[j - 1];
                count = 1; // Reset the count for the next digit
            }
        }
        // Append the last group of digits
        temp += to_string(count) + result[result.length() - 1];
        
        // Update the result for the next iteration
        result = temp;
    }

    return result;
}

int main() {
    int n;
    
    // Input the value of n
    cout << "Enter the value of n: ";
    cin >> n;

    // Output the nth term of the count-and-say sequence
    cout << "countAndSay(" << n << ") = " << countAndSay(n) << endl;

    return 0;
}
