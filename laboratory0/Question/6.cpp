#include<iostream>
using namespace std;
struct length{ 
    int f1,f2,i1,i2;
    void input(){
cout<<"Enter the length in feet and inches\n";
cout<<"Enter the first length in feet and inches\n";
cin>>f1>>i1;
cout<<"Enter the second length in feet and inches\n";
cin>>f2>>i2;
}};
int main(){
    float a,b;
    length len;
    len.input();
    a=len.f1+len.f2;
    b=len.i1+len.i2;
    if(b>=12){b=b-12;a=a+1;}
    cout<<"The sum of both the length is : "<<a<<" feet "<<b<<" inches\n";
    }