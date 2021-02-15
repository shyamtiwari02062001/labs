#include<iostream>
#include <cmath> 
using namespace  std;
#define INCREMENT(x) ++x
#define DECREMENT(x) --x
#define SQUARE(x) x*x
#define FLOOR(x)  floor(x)
#define CEIL(x) ceil(x)
int main(){
    double k=10.8;
    cout<<INCREMENT(k)<<endl;
    cout<<DECREMENT(k)<<endl;
    cout<<SQUARE(k)<<endl;
    cout<<FLOOR(k)<<endl;
    cout<<CEIL(k)<<endl;
}