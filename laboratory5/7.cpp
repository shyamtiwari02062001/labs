#include<iostream>
using namespace std;
class student{
    string name;
    int rollNo;
    string branch;
    int classes;
    public:
    student(string n,int r,string b,int c){
        name=n;
        rollNo=r;
        branch=b;
        classes=c;
    }
    void showStudent(){
        cout<<"The name of student is "<<name<<endl;
        cout<<"The student class is "<<classes<<endl;
        cout<<"The student branch is "<<branch<<endl;
        cout<<"The student rollno is "<<rollNo<<endl;
    }
};
int main(){
    student s("Shyam Tiwari",036,"CSE",10);
    s.showStudent();
}