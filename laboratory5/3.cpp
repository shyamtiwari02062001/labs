#include<iostream>
#include<cmath>
using namespace std;
class circle{
    double x,y;
    double x1,y1;
    double r;
    public:
    circle(double a,double b,double a1,double b1){
        x=a;
        y=b;
        x1=a1;
        y1=b1;
        double m=(x1-x)*(x1-x);
        double n=(y1-x)*(y1-y);
        r=sqrt(m+n);
        cout<<"The area of circle is "<<3.14*r*r<<endl;
        cout<<"The circumference of circle is "<<3.14*r*2<<endl;
    }
};
int main(){
    circle c(-3,2,2,5);
}