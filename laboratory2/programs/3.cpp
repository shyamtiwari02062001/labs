#include<iostream>
using namespace std;
void swap(int *a,int *b){
    cout<<"Value of a is :"<<*a<<endl;
    cout<<"Value of b is :"<<*b<<endl;
    int *temp; temp=a;  a=b;   b=temp;
    cout<<"Value of a after swap is :"<<*a<<endl;
    cout<<"Value of b after swap is :"<<*b<<endl;
}
int main(){
    int a=5,b=10;
    swap(&a,&b);
    return 0;
}