#include<iostream>
using namespace std;
class area{
    public:
    int findArea(int l,int b){
        return (l*b);
    }
    double findArea(int r){
        return (3.14*r*r);
    }
};
int main(){
    area circle;
    area rectangle;
    int c=circle.findArea(10);
    int r=rectangle.findArea(2,4);
    cout<<"The area of circle is "<<c<<endl;
    cout<<"The area of rectangle is "<<r<<endl;
}