// Without using third variable

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<"\nBefore Swapping: "<<"a =  "<<a<<", b = "<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\nAfter Swapping: "<<"a =  "<<a<<", b = "<<b;
    return 0;
}