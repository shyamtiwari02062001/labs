#include<iostream>
#include<cmath>
using namespace std;
class area{
    public:
    area(int radius){
        cout<<"The area of circle is "<<3.15*radius*radius<<endl;
    }
    area(int length,int breadth){
        cout<<"The area of rectangle is "<<length*breadth<<endl;
    }
    area(double a,double b, double c){
        double s=(a+b+c)/2;
        double trianglearea=s*(s-a)*(s-b)*(s-c);
        cout<<"The area of triangle is "<<sqrt(trianglearea)<<endl;
    }
};
int main(){
    area a(10);
    area a1=area(10,20);
    area a2=area(24,30,18);
}