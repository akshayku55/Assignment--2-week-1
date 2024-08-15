#include<iostream>
using namespace std;
int main(){
    // v=pi*r*r*h
    float v,pi,r,h;
    pi = 3.14;
    cout<<"Enter r: ";
    cin>>r;
    cout<<"Enter h: ";
    cin>>h;
    v = pi*r*r*h;
    cout<<v;
}