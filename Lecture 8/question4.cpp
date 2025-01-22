// // 4= Print the following pattern
// Input: n = 4
// Output:
// A B C D E F G
// A B C   E F G
// A B       F G
// A           G

#include <iostream>
using namespace std;

int main() {
    char start = 'A'; // Starting character 'A'
    char end = 'G';   // Ending character 'G'
    int rows = 4;     // Total number of rows

    for (int i = 0; i < rows; i++) {
        char ch = start;

        // Print characters from A to a certain point
        for (char ch = start; ch <= end; ch++) {
            // Print only the outer characters, leave gaps for the middle ones
            if (ch <= start + i || ch >= end - i) {
                cout << ch << " ";  // Print character
            } else {
                cout << "  ";  // Print gap
            }
        }

        cout << endl;  // Move to the next line after each row
    }

    return 0;
}

