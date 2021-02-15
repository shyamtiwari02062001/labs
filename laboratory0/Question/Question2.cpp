




#include<iostream>
using namespace std;
int main(){ 
    int num=5;
    int *ptr;
    void *g;
    ptr=&num;
    cout<<"Value of num is "<<num;
    cout<<"\nThe address of the integer pointer is "<<ptr;
    cout<<"\nThe address of the generic pointer is "<<g;
    cout<<"\n";
    }