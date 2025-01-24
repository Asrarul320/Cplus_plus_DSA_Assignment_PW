//9= Write a C++ program to input any character and check whether it is the alphabet, digit or special
// character.
// Input 1: ch = ‘9’
// Output 1: digit

#include <iostream>
 using namespace std;
int main(){
    char ch;
    cout<<"Enter the Character";
    cin>>ch;
    int x=(int)ch;
    if(x>=65 && x<=90) cout<<"Capital Alphabet";
    else if(x>=97 && x<=122) cout<<"Small Alphabet";
    else if(x>=48 && x<=57) cout<<"Number";
    else cout<<"Special Character"; 
}