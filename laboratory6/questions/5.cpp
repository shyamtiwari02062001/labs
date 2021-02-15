#include<iostream>
using namespace std;
class student{
    public:
    string fname;
    string lname;
    string branch;
    int rollNo;
    void getData(){
        cout<<"Enter the first name of the student ";
        cin>>fname;
        cout<<"Enter the last name of the student ";
        cin>>lname;
        cout<<"Enter rollNo of the student ";
        cin>>rollNo;
        cout<<endl;
    }
    void showData(){
         cout<<"The first name of the student is "<<fname<<endl;
         cout<<"The last name of the student is "<<lname<<endl;
         cout<<"The RollNo of the student is "<<rollNo<<endl;
    }
};
class GradStudent:public student{
    private:
    string specialization;
    public:
    void getData(){
        cout<<"Enter the first name of the student ";
        cin>>fname;
        cout<<"Enter the last name of the student ";
        cin>>lname;
        cout<<"Enter rollNo of the student ";
        cin>>rollNo;
        cout<<"Enter specialization paper name ";
        cin>>specialization;
        cout<<endl;
    }
    void showData(){
         cout<<"The first name of the student is "<<fname<<endl;
         cout<<"The last name of the student is "<<lname<<endl;
         cout<<"The RollNo of the student is "<<rollNo<<endl;
         cout<<"The specialization paper name is "<<specialization<<endl;
    }
};
class UGStudent:public student{
    private:
    string elective;
    public:
    void getData(){
        cout<<"Enter the first name of the student ";
        cin>>fname;
        cout<<"Enter the last name of the student ";
        cin>>lname;
        cout<<"Enter rollNo of the student ";
        cin>>rollNo;
        cout<<"Enter elective paper name ";
        cin>>elective;
        cout<<endl;
    }
    void showData(){
         cout<<"The first name of the student is "<<fname<<endl;
         cout<<"The last name of the student is "<<lname<<endl;
         cout<<"The RollNo of the student is"<<rollNo<<endl;
         cout<<"The elective paper name is "<<elective<<endl;
    }
};
int main(){
    student s;
    s.getData();
    s.showData();
    GradStudent gs;
    gs.getData();
    gs.showData();
    UGStudent ugs;
    ugs.getData();
    ugs.showData();
}