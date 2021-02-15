#include<iostream>
using namespace std;
class rectangle{
    protected:
    double len,width;
    public:
    rectangle(double l,double w){
        len=l;
        width=w;
    }
};
class box:public rectangle{
    double height;
    public:
    box(double l,double w,double h):rectangle(l,w){
        height=h;
    }
        double findvolume(){
            return len*width*height;
        }
};
int main(){
    box b(5.0,4.0,3.0);
    double d=b.findvolume();
    cout<<"Volume = "<<d<<endl;
}