#include<iostream>
using namespace std;
int area(int l,int b){
    return l*b;
}
double area(double r){
    return (3.14*r*r);
}
float area(float b,float h){
    return (0.5*b*h);
}
int main(){
    int rectangle=area(5,6);
    double circle=area(10.154);
    float triangle=area(4.5f,5.6f);
    cout<<rectangle<<endl;
    cout<<circle<<endl;
    cout<<triangle<<endl;
}