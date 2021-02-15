#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
double add(double a,double b){
    return a+b;
}
int main(){
    int x=add(3,4);
    double y=add(4.6,7.8);
}