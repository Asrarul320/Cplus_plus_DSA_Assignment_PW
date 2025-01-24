// Q5 Given a sentence ‘str’, return the word that is lexicographically maximum.
// Input : str = "proud to be pwians"
// Output : pwians
// Input : str = "decode dsa with pw"
// Output : with


#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string findLexicographicallyMaximumWord(const string &str) {
    stringstream ss(str);
    string word, maxWord;
    ss >> maxWord; // Initialize maxWord with the first word

    while (ss >> word) {
        if (word > maxWord) { // Check if the current word is lexicographically greater
            maxWord = word;
        }
    }

    return maxWord;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str); // Read the entire sentence, including spaces

    string result = findLexicographicallyMaximumWord(str);
    cout << "Lexicographically maximum word: " << result << endl;

    return 0;
}
