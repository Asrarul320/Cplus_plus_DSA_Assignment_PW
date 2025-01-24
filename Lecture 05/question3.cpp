// 3= Print the table of ‘n’. Here ‘n’ is an integer which the user will input.

#include<iostream>
using namespace std;
// // First Ways
// int main(){
//     int n;
//     cin>>n;
//     for(int i=n;i<=n*10;i=i+n) cout<<i<<endl;
// }

// // Second ways
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=10;i++) cout<<n*i<<endl;
}