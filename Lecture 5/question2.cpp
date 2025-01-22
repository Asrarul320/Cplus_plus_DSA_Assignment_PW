// 2=  Print all numbers from 1 to 100 that are divisible by 3

#include<iostream>
using namespace std;
// // First ways
// int main(){
//     for(int i=1;i<=100;i++) if(i%3==0) cout<<i<<endl;
// }


// // second ways
// int main(){
//     for(int i=3;i<=100;i=i+3) cout<<i<<endl;
// }


// // third ways
int main(){
    int i;
    for(i=3;i<=100;i=i+3) cout<<i<<endl;
    cout<<i;
}