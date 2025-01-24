// // 3= Find the first non-repeating element in the array .


#include <iostream>
#include <unordered_map>
using namespace std;

int findFirstNonRepeating(int arr[], int size) {
    unordered_map<int, int> freq;

    // Count the frequency of each element
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    // Find the first element with frequency 1
    for (int i = 0; i < size; i++) {
        if (freq[arr[i]] == 1) {
            return arr[i];
        }
    }

    // Return -1 if no non-repeating element is found
    return -1;
}

int main() {
    int arr[] = {9, 4, 9, 6, 7, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = findFirstNonRepeating(arr, size);

    if (result != -1) {
        cout << "The first non-repeating element is: " << result << endl;
    } else {
        cout << "No non-repeating element found." << endl;
    }

    return 0;
}
