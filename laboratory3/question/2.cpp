#include<iostream>
using namespace std;
class date{
    int day;
    string month;
    int year;
    public:
    void setDate(int d,int y,string m){
        day=d;
        year=y;
        month=m;
    }
    void printDate(){
        cout<<"The date is "<<day<<"/"<<month<<"/"<<year<<endl;
    }
};
int main(){
    date d;
    d.setDate(02,2001,"june");
    d.printDate();
}