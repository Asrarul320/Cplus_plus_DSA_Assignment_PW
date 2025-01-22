// 4. WAP for finding the volume of the cylinder by taking radius and height as input

#include<iostream>
using namespace std;
int main(){
    float radius, height, pi=3.14;
    cout<<"Enter the Radius ";
    cin>>radius;
    cout<<"Enter the Heght";
    cin>>height;
    float valumeCylender=pi*radius*radius*height;
    cout<<valumeCylender;
}