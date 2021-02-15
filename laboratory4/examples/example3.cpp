#include<iostream>
using namespace std;
class B{
    int secret;
    public:
    friend class A;
    B(){
        secret=10;
    }
    void sayhello(){
        cout<<"Hello Sir "<<secret<<endl;
    }
};
class A{
    int value;
    public:
    A(){
        value=5;
    }
    void show(){
        cout<<"Value = "<<value<<endl;
    }
    void change(B &b){
        b.secret=20;
    }
};
int main(){
    A a;
    B b;
    a.change(b);
    b.sayhello();
    a.show();
    return 0;
}