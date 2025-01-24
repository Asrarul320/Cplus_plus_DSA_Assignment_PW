// Q4 Given an array of strings. Check whether they are anagram or not.
// Input : s = "car" , t = "arc"
// Output : True
// Input : s = "book" , t = "hook"
// Output : False


#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool areAnagrams(string s, string t) {
    if (s.length() != t.length()) {
        return false; // If lengths are different, they cannot be anagrams
    }

    sort(s.begin(), s.end()); // Sort the first string
    sort(t.begin(), t.end()); // Sort the second string

    return s == t; // Compare the sorted strings
}

int main() {
    string s, t;
    cout << "Enter the first string: ";
    cin >> s;
    cout << "Enter the second string: ";
    cin >> t;

    if (areAnagrams(s, t)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
