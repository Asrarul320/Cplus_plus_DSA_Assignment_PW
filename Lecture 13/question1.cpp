// // 1= Count the number of triplets whose sum is equal to the given value x.


#include <iostream>
#include <algorithm> // For sort
using namespace std;

int countTriplets(int arr[], int size, int x) {
    int count = 0;

    // Sort the array
    sort(arr, arr + size);

    // Fix the first element and use two pointers for the rest
    for (int i = 0; i < size - 2; i++) {
        int left = i + 1, right = size - 1;

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == x) {
                count++;
                left++;
                right--;
            } else if (sum < x) {
                left++; // Increase the sum
            } else {
                right--; // Decrease the sum
            }
        }
    }

    return count;
}

int main() {
    int arr[] = {1, 4, 6, 2, 3, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 10; // Target sum

    int result = countTriplets(arr, size, x);

    cout << "Number of triplets with sum " << x << " is: " << result << endl;

    return 0;
}
