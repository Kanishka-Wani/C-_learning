//write a program to check even number

#include<iostream>
using namespace std;
int main(){

    int no;
    cout<<"Enter any number : ";
    cin>>no;
    if(no%2 == 0){
        cout<<no <<" is even number ";

    }
    else{
        cout<<no <<" is odd number";
    }
    return 0;
}