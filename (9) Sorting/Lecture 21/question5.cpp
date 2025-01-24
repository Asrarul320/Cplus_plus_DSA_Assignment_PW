// Q5 Check if the given array is almost sorted. (elements are at-most one position away)


#include <iostream>
using namespace std;

bool isAlmostSorted(int arr[], int n) {
    int count = 0;  // To count the number of inversions

    // Traverse through the array and check if each element is out of place
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            count++;
            // If count exceeds 1, return false (more than one inversion)
            if (count > 1) {
                return false;
            }

            // Check if the inversion is due to elements being at most one position away
            // Swap arr[i] with arr[i+1] and check if the array becomes sorted
            if (i > 0 && arr[i] < arr[i - 1]) {
                return false;
            }
            if (i + 2 < n && arr[i + 1] < arr[i + 2]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int arr[] = {1, 3, 2, 5, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isAlmostSorted(arr, n)) {
        cout << "The array is almost sorted!" << endl;
    } else {
        cout << "The array is not almost sorted!" << endl;
    }

    return 0;
}
