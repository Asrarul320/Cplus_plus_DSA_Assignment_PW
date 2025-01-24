// Given the length and breadth of a rectangle, write a program to find whether numerically the area of
// the rectangle is greater than its perimeter.
// Input 1: length = 5 breadth = 7
// Output 1: Area is greater than perimeter

#include <iostream>
using namespace std;
int main() {
 int length, breadth;
 cout << "Enter the length and breadth of the rectangle respectively : ";
 cin >> length >> breadth;
 int area = length * breadth;
 int perimeter = 2 * (length + breadth);
 if (area > perimeter) cout << "Area is greater than perimeter.";
 else cout << "Perimeter is greater than area.";
 return 0;
}