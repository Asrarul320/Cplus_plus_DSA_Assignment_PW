// 7= Print the following pattern
// Sample Input : n = 4
// Output :
//    ****
//   ****
//  ****
// ****

#include<iostream>
using namespace std;
int main(){
    int x=4;
    for(int i=x;i>=1;i--){
        for(int j=1;j<=i-1;j++){
        cout<<" ";
        }
        for(int k=1; k<=x; k++){
            cout<<"*";
        }
        cout<<endl;
    }
}