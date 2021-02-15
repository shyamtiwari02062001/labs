#include<iostream>
using namespace std;
inline int max(int a,int b){
    return (a>b)?a:b;
}
int main(){
    int i=5,j=7,k;
    k=max(i++,j++);
    return 0;
}