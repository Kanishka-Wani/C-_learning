//Using third variable 

#include<iostream>
using namespace std;
int main(){

   int a,b,c;
   cout<<"Enter 1st number: ";
   cin>>a;
   cout<<"Enter 2nd number: ";
   cin>>b;

   cout<<"Before Swapping: \n"<<"a = "<<a<<" b = "<<b;
   c=a;
   a=b;
   b=c;
   
   cout<<"\nAfter Swapping: \n"<<"a = "<<a<<" b = "<<b;

   return 0;
}