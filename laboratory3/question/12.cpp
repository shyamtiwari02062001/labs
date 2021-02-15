#include<iostream>
using namespace std;
class complex{
    private:
    int a;
    int b;
    public:
    void set_data(int x,int y){
        a=x;
        b=y;
    }
    void show_data(){
        cout<<"a= "<<a<<" b= "<<b<<endl;
    }
    complex add(complex c){
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
    complex add(complex c1,complex c2){
        complex temp;
        temp.a=c1.a+c2.a;
        temp.b=c1.b+c2.b;
        return temp;
    }
};
int main(){
    complex c1,c2,c3,c4;
    c1.set_data(3,4);
    c2.set_data(5,6);
    c3=c1.add(c2);
    c3.show_data();
    c4=c1.add(c1,c3);
    c4.show_data();
}