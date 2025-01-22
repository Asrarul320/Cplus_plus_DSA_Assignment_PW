// 1= Print the following pattern
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4

#include<iostream>
using namespace std;
int main(){
    int x=4;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
        cout<<i;
        }
        cout<<endl;
    }
}