// 5= Print the following pattern
// Input n = 4
// Output:
// *
// **
// ***
// ****
// ***
// **
// *


#include<iostream>
using namespace std;
int main(){
    int x=4;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
        cout<<"*";
        }
        cout<<endl;
    }
    for(int i=x;i>=1;i--){
        for(int j=1;j<=i-1;j++){
        cout<<"*";
        }
        cout<<endl;
    }
}

