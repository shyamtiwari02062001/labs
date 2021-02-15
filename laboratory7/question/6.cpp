#include<iostream>
using namespace std;
class cv{
    private:
    float x;
    public:
    void setData(int a){
        x=a;
    }
    void getData(){
        cout<<"X = "<<x;
    }
    cv operator +(cv c){
        cv temp;
        temp.x=x+c.x;
        return temp;
    }
     cv operator *(cv c){
        cv temp;
        temp.x=x*c.x;
        return temp;
    }
};
    int main(){
        int temp;
        cv c1,c2,c3,c4;
        c1.setData(14);
        c2.setData(17);
        cout<<"\n After addition of two objects ";
        c3=c1+c2;
        c3.getData();
        cout<<"\n After multiplication of two objects ";
        c4=c1*c2;
        c4.getData();cout<<endl;
    }