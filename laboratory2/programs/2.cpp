#include<iostream>
using namespace std;
void increment(int x){ x++; cout<<x<<endl; }
void increment1(int *x){
    int &a=*x;
    a++;
    cout<<a<<endl;
}
void increment2(int & x){    cout<<x<<endl; }
int main(){
    int a=5;
    increment(a);
    increment1(&a);
    increment2(a);
}