// write a program to input subject marks and calculate percentage

#include<iostream>
using namespace std;
int main(){
    int math_marks, chem_marks, physics_marks, total;
    float per;
    cout<<"Enter marks of Mathematics: ";
    cin>>math_marks;
    cout<<"Enter marks of Chemistry: ";
    cin>>chem_marks;
    cout<<"Enter marks of Physics: ";
    cin>>physics_marks;

    total = math_marks + chem_marks + physics_marks;
    per= (total/3)*100;

    cout<<"Percentage: "<<per<<"%";

    return 0;
}
