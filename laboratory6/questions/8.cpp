#include<iostream>
using namespace std;
class Student{
    protected:
    string Student_name;
    int rollNo;
    public:
    void getData(string name,int rollno){
        Student_name=name;
        rollno=rollNo;
    }
};
class Internalmarks:virtual public Student{
    protected:
    float Isub1_marks,Isub2_marks,Isub3_marks;
    public:
    void get_Internalmarks(float x,float y,float z){
        Isub1_marks=x;
        Isub2_marks=y;
        Isub3_marks=z;
    }
};
class Semestermarks:virtual public Student{
    protected:
    float Ssub1_marks,Ssub2_marks,Ssub3_marks;
    public:
    void get_Semestermarks(float x,float y,float z){
        Ssub1_marks=x;
        Ssub2_marks=y;
        Ssub3_marks=z;
    }
};
class Seasonalmarks:virtual public Student{
    protected:
    float SEAsub1_marks,SEAsub2_marks,SEAsub3_marks;
    public:
    void get_Seasonalmarks(float x,float y,float z){
        SEAsub1_marks=x;
        SEAsub2_marks=y;
        SEAsub3_marks=z;
    }
};
class result:public Internalmarks,public Semestermarks,public Seasonalmarks{
    private:
    double totalMarks1,totalMarks2,totalMarks3;
    public:
    void grandTotal(){
        totalMarks1=Isub1_marks+Ssub1_marks+SEAsub1_marks;
        totalMarks2=Isub2_marks+Ssub2_marks+SEAsub2_marks;
        totalMarks3=Isub3_marks+Ssub3_marks+SEAsub3_marks;
    }
    void DisplayInfo(){
        cout<<"Name of student is "<<Student_name<<endl;
        cout<<"RollNo of student is "<<rollNo<<endl;
        cout<<"Total marks in subject1 is "<<totalMarks1<<endl;
        cout<<"Total marks in subject2 is "<<totalMarks2<<endl;
        cout<<"Total marks in subject3 is "<<totalMarks3<<endl;
    }
};
int main(){
    result Student1;
    Student1.getData("Shyam",36);
    Student1.get_Internalmarks(7,8,9);
    Student1.get_Semestermarks(55,66,67);
    Student1.get_Seasonalmarks(17,18,19);
    Student1.grandTotal();
    Student1.DisplayInfo();
}