#include<iostream>
using namespace std;
void showstat(int &cur){
    static int nstatic=0;
    nstatic+=cur;
    cout<<"nStatic is "<<nstatic<<endl;
}
int main(){
    for(int i=0;i<5;i++)
    showstat(i);
    return 0;
}