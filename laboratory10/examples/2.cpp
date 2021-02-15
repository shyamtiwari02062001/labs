#include<iostream>
#include<cstdlib>
using namespace std;
#define max 10
template<class T>
class stack{
    int top;
    T a[max];
    public:
    stack(){    top=-1;  }
    ~stack(){   }
    void push( T x){
        if(top==max-1){
            cout<<"Stack overflow"<<endl;
            exit(0);
        }
        else{   a[++top]=x;  }
    }
T pop(){
    T x;
    if(top==-1){
        cout<<"Stack Underflow"<<endl;
        exit(0);
    }
    else{   x=a[top--]; }
    return x;
}
void show(){
    for(int i=0;i<=top;i++){
        cout<<"a["<<i<<"]="<<a[i]<<endl;
    }
}
};
int main(){
    stack<float>s;
    s.push(10.9);
    s.push(23.8);
    s.show();
    float x=s.pop();
    cout<<"x="<<x<<endl;
}