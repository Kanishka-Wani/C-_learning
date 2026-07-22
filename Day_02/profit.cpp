// write a program to input purchase price and sell price , if pp>sp then print loss otherwise print profit

#include<iostream>
using namespace std;
int main(){
    int pp, sp;
    cout<<"Enter purchase price and selling price: ";
    cin>>pp>>sp;
    if(pp>sp){
        cout<<"loss: "<<pp-sp;
    }
    else{
        cout<<"profit: "<<sp-pp;
    }
    return 0;
}
