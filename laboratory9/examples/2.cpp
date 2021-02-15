#include<iostream>
using namespace std;
class Base{};
class D:public Base{};
int main(){
    D OD1;
    try{
        throw OD1;
    }
    catch(Base B){
        cout<<"Base class exception"<<endl;
    }
    catch (D d){
        cout<<"Derived class exception"<<endl;
    }
    return 0;
}