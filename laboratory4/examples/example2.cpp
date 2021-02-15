#include<iostream>
using namespace std;
class two;
class one{
    private:
    int data1;
    public:
    void setData(int x){data1=x;}
    friend int add_both(one a,two b);
};
class two{
    int data2;
    public:
    void setData(int x){data2=x;}
    friend int add_both(one a,two b);
};
int add_both(one a,two b){
    return a.data1+b.data2;
}
int main(){
    one a;
    two b;
    a.setData(3);
    b.setData(5);
    cout<<"Sum of one and two : "<<add_both(a,b);
    return 0;
}