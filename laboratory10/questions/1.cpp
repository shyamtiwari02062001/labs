#include<iostream>
using namespace std;
template <class T>
void binary(T num){
    T rem[16];
    int i=0;
    cout<<"Decimal number is "<<num<<endl;
    while(num!=0){
        rem[i]=num%2;
        num=num/2;
        i++;
    }
    cout<<"Its binary is :";
    while(i>0){ cout<<" "<<rem[--i];    }
    cout<<endl;
}
int main(){
    binary(100);
}