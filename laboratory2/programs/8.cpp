#include<iostream>
using namespace std;
#define SWAP(a,b) {a=a+b; b=a-b;a=a-b;}
inline void swap(int a,int b){
    int temp;    temp=a;    a=b;    b=temp;
     cout<<"The value of x is "<<a<<" and y is "<<b<<endl;
}
int main(){
    int x=5,y=6;
    cout<<"The value of x is "<<x<<" and y is "<<y<<endl;
    SWAP(x,y);
    cout<<"The value of x is "<<x<<" and y is "<<y<<endl;
    int a=10,b=20;
    cout<<"The value of x is "<<a<<" and y is "<<b<<endl;
    swap(a,b);
}