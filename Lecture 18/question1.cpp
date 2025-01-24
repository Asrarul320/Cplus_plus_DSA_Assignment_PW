// Q1 Input a string and concatenate with its reverse string and print it.
// Input : str = "PWSkills"
// Output : "PWSkillssllikSWP" 
// Input : str = "pw"
// Output : "pwwp"


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string concatenateWithReverse(const string &str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end()); // Reverse the string
    return str + reversedStr; // Concatenate the original string with its reverse
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string result = concatenateWithReverse(str);
    cout << "Result: " << result << endl;

    return 0;
}
