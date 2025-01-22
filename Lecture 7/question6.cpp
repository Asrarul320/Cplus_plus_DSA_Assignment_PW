// 6= Print the following pattern
// Sample Input : m = 4, n = 6
// Sample Output :
// ******
// *    *
// *    *
// ******

#include<iostream>
using namespace std;
int main(){
    int m=6, n=10;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1 || i==m || j==n ){
                    cout<<"*";
            } 
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}