// Q1 Input a string of size n and update all the odd positions in the string to character ‘#’. Consider 
// 0-based indexing.
// Input : str = "Pbwcshkuiglhlds"
// Output : "P#w#s#k#i#l#l#s"
// input : str = "a"
// Output : "a"


#include <iostream>
#include <string>
using namespace std;

void updateOddPositions(string &str) {
    for (size_t i = 1; i < str.size(); i += 2) {
        str[i] = '#'; // Update odd positions (1-based) to '#'
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    updateOddPositions(str);

    cout << "Updated string: " << str << endl;

    return 0;
}
