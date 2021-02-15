#include<iostream>
using namespace std;
typedef struct poimt {
    double x,y;
    void getval(){
        cout<<"Enter the value of x and y\n";
        cin>>x>>y;
    }
    void show(){
        cout<<"x = "<<x<<" y = "<<y<<endl;
    }
}Point;
int main(){
    Point p;
    p.getval();
    p.show();
    return 0;
}