// 5= Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or
// isosceles triangle.
// Input : side1 = 5 side2 = 4 side3 = 4
// Output: This is an Isosceles triangle.

#include <iostream>
 using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first side ";
    cin>>a;
    cout<<"Enter second side ";
    cin>>b;
    cout<<"Enter third side ";
    cin>>c;
if(a+b>c && a+c>b && b+c>a){
     cout<<"Triangle form"<<endl;

   if(a==b && b==c) cout<<"Equilaterial Triangle";
   else if(a==b || a==c || b==c) cout<<"Isoceles Triangle";
   else cout<<"Scalen Triangle";
}
else{
    cout<<"Triangle not form ";
}
}