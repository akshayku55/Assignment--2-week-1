#include<iostream>
using namespace std;
int main(){
    // diff between 2 ascii values
    char a;
    cout<<"Enter 1st char: ";
    cin>>a;
    char a1;
    cout<<"Enter 2nd char: ";
    cin>>a1;
    int b = (int)a;
    int b1 = (int)a1;
    int c = b - b1;
    cout<<c;
}