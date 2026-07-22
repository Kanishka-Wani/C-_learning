// write a program to input your gender initials and print appropriate message
#include<iostream>
using namespace std;
int main(){
    char gender;
    cout<<"Enter your gender initial: ";
    cin>> gender;
    if(gender=='m'){
        cout<<"Male";
    }
    else{
        cout<<"female";
    }
    return 0;
}
