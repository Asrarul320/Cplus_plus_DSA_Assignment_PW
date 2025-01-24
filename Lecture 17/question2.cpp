// Q2 Input a string of length n and count all the consonants in the given string.
// Input : "pwians"
// Output : 4
// Input : "abdc"
// Output : 3


#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isVowel(char c) {
    c = tolower(c); // Convert to lowercase for case-insensitive comparison
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int countConsonants(const string &str) {
    int count = 0;
    for (char c : str) {
        if (isalpha(c) && !isVowel(c)) { // Check if character is an alphabet and not a vowel
            count++;
        }
    }
    return count;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int consonantsCount = countConsonants(str);

    cout << "Number of consonants: " << consonantsCount << endl;

    return 0;
}
