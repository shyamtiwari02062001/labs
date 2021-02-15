#include<iostream>
using namespace std;
class employee{
    protected:
    string name;
    string department;
    double salary;
    public:
    void get_info(string _name,string _department,double _salary){
        name=_name;
        department=_department;
        salary=_salary;
    }
};
class manager:public employee{
    public:
    void print(){
        cout<<"\n Manager name : "<<name;
        cout<<"\n Department: "<<department;
        cout<<"\n Salary :"<<salary;
    }
};
class executive:public manager{
    public:
    void print(){
        cout<<"\n Execute";
    }
};
int main(){
    manager manager1;
    executive exe1;
    manager1.get_info("Shyam","R&D",50000);
    manager1.print();
    exe1.print();
}