#include<iostream>
using namespace std;
void show(const char*s){
    cout<<"hello "<<s<<endl;
}
void show(...){
    cout<<"Hi"<<endl;
}
int main(){
    show("C++ labs");
    int x=6;
    show(6);
}