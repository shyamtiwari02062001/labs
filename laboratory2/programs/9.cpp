#include<iostream>
using namespace std;
#define max(a,b) (a>b)?a:b
inline int maximum(int a,int b){
    if(a<b){     return b;    }
    else{        return a;    }
}
int main(){
    cout<<maximum(4,1)<<endl;
    int k=max(9,11);
    cout<<k<<endl;
}