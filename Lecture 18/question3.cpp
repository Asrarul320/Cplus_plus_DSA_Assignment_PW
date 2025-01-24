// Q3 Input a string and return the number of substrings that contain only vowels.
// Input : str = "abjkoe"
// Output : 4
// Explanation : The possible substrings that only contain vowels are "a" , "o" , "e" , "oe"
// Input : str = "hgdhpw"
// Output : 0


#include <iostream>
#include <string>
#include <set>
using namespace std;

bool isVowel(char c) {
    c = tolower(c); // Convert to lowercase
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int countVowelSubstrings(const string &str) {
    int n = str.length();
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (isVowel(str[i])) {
            for (int j = i; j < n; j++) {
                if (isVowel(str[j])) {
                    count++; // Increment count for each substring
                } else {
                    break; // Stop if a non-vowel character is encountered
                }
            }
        }
    }
    return count;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int result = countVowelSubstrings(str);
    cout << "Number of substrings that contain only vowels: " << result << endl;

    return 0;
}
