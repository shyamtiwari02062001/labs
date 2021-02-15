#include<iostream>
using namespace std;
class student{
    string name;
    int std;
    int age;
    int rollno;
};
int main(){
    student s;
    cout<<sizeof(s)<<endl;
}