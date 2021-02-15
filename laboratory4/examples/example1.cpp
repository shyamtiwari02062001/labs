#include<iostream>
using namespace std;
class myclass{
    int a,b;
    public:
    friend int sum(myclass x);
    void set_value(int x,int y);
};
void myclass::set_value(int x,int y){
    a=x;
    b=y;
}
int sum(myclass x){
    return (x.a+x.b);
}
int main(){
    myclass m1;
    m1.set_value(3,5);
    cout<<sum(m1);
    return 0;
}