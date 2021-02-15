#include<iostream>
using namespace std;
class B{
    public:
    B(){
        cout<<"Base created"<<endl;
    }
    virtual ~B(){
        cout<<"Base Destructured"<<endl;
    }
};
class A:public B{
    public:
    A(){
        cout<<"Derived created"<<endl;
    }
    virtual ~A(){
        cout<<"Derived Destructured"<<endl;
    }
};
int main(){
    B*ptr=new A();
    ptr->~B();
}