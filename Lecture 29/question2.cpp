// Print all the increasing sequences of length k from first n natural numbers.


#include <iostream>
#include <vector>
using namespace std;

// Recursive function to generate increasing sequences
void generateSequences(int n, int k, int start, vector<int>& current) {
    // Base case: If the sequence length is k, print it
    if (current.size() == k) {
        for (int num : current) {
            cout << num << " ";
        }
        cout << endl;
        return;
    }

    // Recursive case: Try all numbers from 'start' to 'n'
    for (int i = start; i <= n; i++) {
        // Include the current number in the sequence
        current.push_back(i);
        // Recur for the next number
        generateSequences(n, k, i + 1, current);
        // Backtrack to explore other possibilities
        current.pop_back();
    }
}

int main() {
    int n, k;
    
    // Input values for n and k
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of k: ";
    cin >> k;
    
    // Vector to store the current sequence
    vector<int> current;

    // Generate sequences
    cout << "Increasing sequences of length " << k << " are:" << endl;
    generateSequences(n, k, 1, current);

    return 0;
}
