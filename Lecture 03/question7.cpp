// 7= Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
// Input 1: 2 0
// Output 1: the point lies on the x - axis.


#include <iostream>
 using namespace std;
int main(){
    int x,y;
    cout<<"Enter X Axis ";
    cin>>x;
    cout<<"Enter Y Axis ";
    cin>>y;
    if(x==0 && y==0) cout<<"Origin";
    else if(x==0) cout<<"lie on Y Axis";
    else if(y==0) cout<<"lie on X Axis";
    else if(x>0 && y>0) cout<<"First Quardinate";
    else if(x<0 && y>0) cout<<"Second Quardinate";
    else if(x<0 && y<0) cout<<"Third Quardinate";
    else cout<<"Fourht Quardinate";
    
}