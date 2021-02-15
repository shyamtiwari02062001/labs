#include<iostream>
using namespace std;
int findArea(int len=2,int wid=1){
    return len*wid;
}
int main(){
    cout<<findArea()<<endl;
    cout<<findArea(5)<<endl;
    cout<<findArea(6,5)<<endl;
}