#include<iostream>
using namespace std;
class rectangle{
    int length;
    int breadth;
    public:
    void setData(int l,int b){
        length=l;
        breadth=b;
    }
    void display(){
        cout<<"The area of rectangle is "<<area(length,breadth)<<endl;
        cout<<"The perimeter of rectangle is "<<perimeter(length,breadth)<<endl;
    }
    int area(int l,int b){
        return l*b;
    }
    int perimeter(int l,int b){
        return 2*(l+b);
    }
};
int main(){
    rectangle r;
    r.setData(5,6);
    r.display();
}