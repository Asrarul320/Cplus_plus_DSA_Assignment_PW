// Q4 Input a string of even length and reverse the second half of the string.
// Input : str = "abcdefgh"
// Output : abcdhgfe
// Input :str = "pwians"
// Output : pwisn


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void reverseSecondHalf(string &str) {
    int n = str.length();
    
    // Reverse the second half of the string
    reverse(str.begin() + n / 2, str.end());
}

int main() {
    string str;
    cout << "Enter a string of even length: ";
    cin >> str;

    // Ensure the string length is even
    if (str.length() % 2 != 0) {
        cout << "The string length is not even!" << endl;
        return 1; // Exit with an error code
    }

    reverseSecondHalf(str);

    cout << "Updated string: " << str << endl;

    return 0;
}
