// // 4= Check if an array is a subset of another .


#include <iostream>
#include <unordered_set>
using namespace std;

// Function to check if arr1 is a subset of arr2
bool isSubset(int arr1[], int size1, int arr2[], int size2) {
    unordered_set<int> elements;

    // Insert all elements of arr2 into the set
    for (int i = 0; i < size2; i++) {
        elements.insert(arr2[i]);
    }

    // Check if each element of arr1 exists in the set
    for (int i = 0; i < size1; i++) {
        if (elements.find(arr1[i]) == elements.end()) {
            return false; // If any element of arr1 is not found, it's not a subset
        }
    }

    return true; // All elements of arr1 are found in arr2
}

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {1, 2, 3, 4, 5, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    if (isSubset(arr1, size1, arr2, size2)) {
        cout << "arr1 is a subset of arr2" << endl;
    } else {
        cout << "arr1 is not a subset of arr2" << endl;
    }

    return 0;
}
