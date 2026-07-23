//write a program to check whether number is palindrome or not
#include<iostream>
using namespace std;
int main(){
    int no, rev=0, r, temp;
    cout<<"Enter any number: ";
    cin>>no;
    temp=no;
    while(no>0){
        r= no%10;
        rev=rev*10+r;
        no=no/10;
    }
    if(temp==rev){
        cout<<"palindrome";

    }
    else{
        cout<<"Not palindrome";
    }
    return 0;

}
