// 3. How much space does the following data types take?
// int
// bool
// float

#include<iostream>
using namespace std;
int main(){
    cout<<"Size of char: "<<sizeof(char)<<" bytes"<<endl;//1
    cout<<"Size of bool: "<<sizeof(bool)<<" bytes"<<endl;//1
    cout<<"Size of short: "<<sizeof(short)<<" bytes"<<endl;//2
    cout<<"Size of int: "<<sizeof(int)<<" bytes"<<endl;//4
    cout<<"Size of float: "<<sizeof(float)<<" bytes"<<endl;//4
    cout<<"Size of long: "<<sizeof(long)<<" bytes"<<endl;//4
    cout<<"Size of long long: "<<sizeof(long long)<<" bytes"<<endl;//8
    cout<<"Size of double: "<<sizeof(double)<<" bytes"<<endl;//8
    cout<<"Size of long double: "<<sizeof(long double)<<" bytes"<<endl;//12
}