#include<iostream>
using namespace std;
class conversion{
    int _integer;
    double _value;
    public:
    conversion(int val){
        _integer=val;
    }
    conversion(double _val){
        _value=_val;
    }
    operator int(){
        int data=_integer;
        return data;
    }
    operator double(){
        double _d=_value;
        return _d;
    }
};
int main(){
    conversion obj1(10),obj2(105.3);
    int i= obj1;
    double d=obj2;
    cout<<"\n After the conversion integer value is "<<i;
    cout<<"\n double value is "<<d<<endl;
}