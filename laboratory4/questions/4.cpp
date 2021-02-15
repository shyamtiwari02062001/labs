#include<iostream>
using namespace std;
class number2;
class number1{
    int a;
    public:
    void setData(int &x){
        a=x;
    }
    friend void swap(number1 n1,number2 n2);
};
class number2{
    int a;
    public:
    void setData(int &x){
        a=x;
    }
    friend void swap(number1 n1,number2 n2);
};
void swap(number1 n1,number2 n2){
    cout<<"The two  numbers are "<<n1.a<<" and "<<n2.a<<endl;
    int temp=n1.a;
    n1.a=n2.a;
    n2.a=temp;
    cout<<"The two  numbers are "<<n1.a<<" and "<<n2.a<<endl;
}
int main(){
    number1 n1;
    number2 n2;
    int a=4;
    int b=3;
    n1.setData(a);
    n2.setData(b);
    swap(n1,n2);
}