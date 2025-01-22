// // 8= Find the error.
// double getAverage(int arr[], int size);
// int main () {
// int balance[5] = {1000, 2, 3, 17, 50};
// double avg;
// avg = getAverage( balance[0], 5 ) ;
// cout << "Average value is: " << avg << endl;
// return 0;
// }


#include <iostream>
using namespace std;

// Function declaration
double getAverage(int arr[], int size);

int main() {
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;

    // Correctly pass the array as an argument
    avg = getAverage(balance, 5);

    cout << "Average value is: " << avg << endl;
    return 0;
}

// Function definition
double getAverage(int arr[], int size) {
    double sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum / size; // Return the average
}
