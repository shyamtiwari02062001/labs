#include<iostream>
using namespace std;
class point{
    int x;
    public:
    void get(int a){
        x=a;
    }
    int set(){
        return x;
    }
};
class circle{
    int radius;
    public:
    void get(int r){
        radius=r;
    }
    int set(){
        return radius;
    }
    double findArea(){
        return (3.14*radius*radius);
    }
    double findCircum(){
        return (3.14*radius*2);
    }
    void show(){
        cout<<"The radius of circle is "<<set()<<endl;
        cout<<"The area of circle is "<<findArea()<<endl;
        cout<<"The circumference of circle is "<<findCircum()<<endl;
    }
};
int main(){
    point p;
    p.get(10);
    circle c;
    c.get(p.set());
    c.show();
}