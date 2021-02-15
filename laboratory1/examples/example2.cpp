#include<iostream>
using namespace std;
void show(const int x){
    cout<<x<<endl;
}
void show(int x){cout<<x<<endl;}
int main(){
    int x;
    const int y=10;
    cin>>x;
    show(x);
    show(y);
    return 0;
}