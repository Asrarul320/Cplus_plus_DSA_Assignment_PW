// // 2=Print the following pattern
// Input: n = 4
// Output:
//       A
//     A B C
//   A B C D E
// A B C D E F G

#include <iostream>
using namespace std;
int main() {
    int rows = 4;
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= rows - i; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout <<char(k+64);
        }
        cout << endl;
    }
}