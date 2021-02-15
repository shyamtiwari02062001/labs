#include<iostream>
using namespace std;
int add(int x,int y){
    return x+y;
}
double add(double x,double y){
    return x+y;
}
int main(){
    int x=add(6,5);
    cout<<x<<endl;
    double y=add(5.6,4.5);
    cout<<y<<endl;
    return 0;
}