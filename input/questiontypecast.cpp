#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"Enter: ";
    cin>>x;
    int y = (int)x;
    if(y<0) y= y-1;
    float z = x - y;
    cout<<z;

    // '* /' > '+ -' 
}