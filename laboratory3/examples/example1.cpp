#include<iostream>
using namespace std;
class myclass{
    int x;
    public:
    void set_value(int a){
        x=a;
    }
    int get_value(){
        return x;
    }
};
int main(){
    myclass obj[3];
    int k;
    for(k=0;k<3;k++){
        obj[k].set_value(k+7);
    }
    for(k=0;k<3;k++){
        cout<<obj[k].get_value()<<endl;
    }
}