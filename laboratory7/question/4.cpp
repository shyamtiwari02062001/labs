#include<iostream>
using namespace std;
class Time{
    int hrs;
    int mins;
    public:
    Time(){ hrs = mins =0;}
    Time(int h,int m){hrs=h;mins=m;}
    Time(int t){ hrs= t/60;mins=t%60;}
    void display(){
        cout<<hrs<<" Hrs "<<mins << " Mins";
    }
};
int main(){
    Time t1;
    int duration =327;
    t1=duration;
    cout<<"\n Duration: ";
    t1.display();
    return 0;
}