// 2= Predict the output:
// #include<iostream>
// using namespace std;
// int main( ) {
//  int a = 5, b, c ;
//  b = a = 15 ;
//  c = a < 15 ;
//  cout << "a = " << a << ", b = " << b << " , c = "<< c ;
// return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=a=15;
    int c=a<15;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;

    /* 
    a=15,  b=15,  c=0
    c=0 es leye aaya keq ke A aur 15 relation dekhaaya ja raha hai  Relation sahi raha to answer 1 nahi to zero aye ga es mey relation sahi nahi hai es leye zero aya hai

    */
}