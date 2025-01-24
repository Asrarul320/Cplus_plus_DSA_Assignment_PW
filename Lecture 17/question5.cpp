// Q5 Input a string of length less than 10 and convert it into integer without using builtin function.
// Input : "3244"
// Output : 3244
// Input : "12"
// Output : 12



#include <iostream>
#include <string>
using namespace std;

int stringToInteger(const string &str) {
    int num = 0;
    for (char c : str) {
        if (c < '0' || c > '9') {
            cout << "Invalid input: The string contains non-digit characters." << endl;
            return -1; // Return -1 for invalid input
        }
        num = num * 10 + (c - '0'); // Convert character to integer and build the number
    }
    return num;
}

int main() {
    string str;
    cout << "Enter a string (length < 10): ";
    cin >> str;

    if (str.length() >= 10) {
        cout << "Invalid input: String length is 10 or greater." << endl;
        return 1; // Exit with error code
    }

    int result = stringToInteger(str);
    if (result != -1) {
        cout << "Converted integer: " << result << endl;
    }

    return 0;
}
