#include<iostream>
using namespace std;
class complex2;
class complex1{
    int a,b;
    public:
    void setData(int x,int y){
        a=x;b=y;
    }
    friend void add(complex1 c1,complex2 c2);
    friend void multiply(complex1 c1,complex2 c2);
};
class complex2{
    int a,b;
    public:
    void setData(int x,int y){
        a=x;b=y;
    }
    friend void add(complex1 c1,complex2 c2);
    friend void multiply(complex1 c1,complex2 c2);
};
void add(complex1 c1,complex2 c2){
    cout<<"sum of complex number is "<<c1.a+c2.a<<" , "<<c1.b+c2.b<<endl;
}
void multiply(complex1 c1,complex2 c2){
    cout<<"multiplication of complex number is "<<c1.a*c2.a<<" , "<<c1.b*c2.b<<endl;
}
int main(){
    complex1 c1;
    complex2 c2;
    c1.setData(3,4);
    c2.setData(3,4);
    add(c1,c2);
    multiply(c1,c2);
}