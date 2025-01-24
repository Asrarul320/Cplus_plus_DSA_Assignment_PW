// Q3 Given two sorted arrays A and B, generate all possible arrays such that the first element is taken 
// from A then from B then from A, and so on in increasing order till the arrays are exhausted. The 
// generated arrays should end with an element from B.
// A = {10, 15, 25}
// B = {1, 5, 20, 30}
// Output: {10 20}, {10 20 25 30}, {10 30}, {15 20}, {15 20 25 30}, {15 30}, 
// {25 30}


#include <iostream>
#include <vector>
using namespace std;

// Function to print an array
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Recursive function to generate arrays ending with an element from B
void generateFromB(vector<int>& current, const vector<int>& A, const vector<int>& B, int i, int j) {
    // Base case: Print the current array if it ends with an element from B
    printArray(current);
    
    // Pick the next element from A
    for (int k = i; k < A.size(); k++) {
        if (A[k] > current.back()) { // Ensure the array remains in increasing order
            current.push_back(A[k]);
            generateFromA(current, A, B, k + 1, j);
            current.pop_back(); // Backtrack
        }
    }
}

// Recursive function to generate arrays starting with an element from A
void generateFromA(vector<int>& current, const vector<int>& A, const vector<int>& B, int i, int j) {
    // Pick the next element from B
    for (int k = j; k < B.size(); k++) {
        if (B[k] > current.back()) { // Ensure the array remains in increasing order
            current.push_back(B[k]);
            generateFromB(current, A, B, i, k + 1);
            current.pop_back(); // Backtrack
        }
    }
}

// Wrapper function to start the generation
void generateArrays(const vector<int>& A, const vector<int>& B) {
    vector<int> current;

    // Start with each element of A
    for (int i = 0; i < A.size(); i++) {
        current.push_back(A[i]);
        generateFromA(current, A, B, i + 1, 0); // Move to the next element in A
        current.pop_back(); // Backtrack
    }
}

int main() {
    vector<int> A = {10, 15, 25};
    vector<int> B = {1, 5, 20, 30};

    cout << "Generated arrays are:" << endl;
    generateArrays(A, B);

    return 0;
}
