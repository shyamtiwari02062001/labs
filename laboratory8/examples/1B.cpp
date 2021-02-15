#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"I am base"<<endl;
    }
};
class B:public A{
    public:
    void show(){
        cout<<"I am derived"<<endl;
    }
};
int main(){
    A a;
    a.show();
    B b;
    b.show();
}