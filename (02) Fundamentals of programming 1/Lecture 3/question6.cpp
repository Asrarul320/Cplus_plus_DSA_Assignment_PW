// 6= If the marks of A, B and C are input through the keyboard, write a program to determine the student
// scoring the least marks.
// Input 1: A = 23 , B = 34 , C = 71
// Output : ‘A’ has the least marks

#include <iostream>
 using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first number ";
    cin>>a;
    cout<<"Enter second number ";
    cin>>b;
    cout<<"Enter third number ";
    cin>>c;
    if(a<b && a<c) cout<<"A has leas number";
    else if(b<c) cout<<"B has least number";
    else cout<<"C has least number";
}