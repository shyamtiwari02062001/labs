#include<iostream>
using namespace std;
struct vector{
    double x;
    double y;
    double surface(){
        double s;
        s=x*y;
        if(s<0)
        s=-s;
        return s;
    }
};
int main(){
    vector v1;
    v1.x=3;
    v1.y=4;
    cout<<"The surface of v1 = "<<v1.surface()<<endl;
}