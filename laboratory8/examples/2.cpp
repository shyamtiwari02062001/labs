#include<iostream>
using namespace std;
class A{
    public:
    virtual void show(){
        cout<<"I am A"<<endl;
    }
};
class B:public A{
    public:
    void show(){
        cout<<"I am B"<<endl;
    }
};
class C:public A{
    public:
    void show(){
        cout<<"I am C"<<endl;
    }
};
int main(){
    A *ptr;A a;B b;C c;
    ptr=&a;
    ptr->show();
    ptr=&b;
    ptr->show();
    ptr=&c;
    ptr->show();
}