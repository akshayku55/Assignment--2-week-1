#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character: ";
    cin>>ch;
    int x = (int)ch;
    cout<<"The ascii value is: "<<x<<endl;
    cout<<x-64; // position of alphabets
}