// 9= Print the following pattern
// Input : n = 4
// Output :
//       A
//     A B
//   A B C
// A B C D

#include<iostream>
using namespace std;
int main(){
    int x=4;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x-i;j++){
        cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<char(k+64);
        }
        cout<<endl;
    }
}