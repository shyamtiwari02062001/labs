#include<iostream>
using namespace std;
class A{
    public:
    int i;
};
class B:virtual public A{
    public:
    int j;
};
class C:virtual public A{
    public :
    int k;
};
class D:public B,public C{

};
int main(){
    D d;
    d.j=10;
    d.j=13;
    d.k=18;
    return 0;
}