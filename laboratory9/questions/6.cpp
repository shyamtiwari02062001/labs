#include<iostream>
using namespace std;
class student{
    protected:
    int id,marks;
    public:
    student (){
        id=0;
        marks=0;
    }
    student (int id,int marks){
        this->id=id;
        this->marks=marks;
    }
    void show(int i){
        cout<<"Id of the student "<<i+1<<" is "<<id;
        cout<<"\n Marks of the student "<<i+1<<" is "<<marks<<endl;
    }
};
int main(){
    student();
    int size,i,data;
    cout<<"\n Enter the number of student in a class ";
    cin>>size;
    student stud[size];
    cout<<"\n Please enter the marks of student out of 100 one by one...";
    for(i=0;i<size;i++){
        cout<<"\n Enter the marks of student "<<i+1<<"  ";
        cin>>data;
        stud[i]=student(i+1,data);
    }
    for(i=0;i<size;i++){
        stud[i].show(i);
    }
}