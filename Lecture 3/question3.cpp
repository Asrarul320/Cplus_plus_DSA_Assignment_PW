// 3= Any year is input through the keyboard. Write a program to determine whether the year is a leap year
// or not. (Considering leap year occurs after every 4 years)
// Input 1: 1976
// Output: yes
// Input 2: 2003
// Output: no

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Year ";
    cin>>n;
    if((n%4==0 && n%100!=0) || n%400==0) cout<<" leap year";
    else cout<<"not leap year";



    // if(n%400==0) cout<<"Leap Year";
    // else if(n%100==0) cout<<"Not leap year";
    // else if(n%4==0) cout<<"Leap year";
    // else cout<<"Not leap year";
}