#include<iostream>
using namespace std;
void indirectVariable(int & x){
    cout<<x<<endl;
}
int main(){
    int a=90;
    indirectVariable(a);
    return 0;
}
