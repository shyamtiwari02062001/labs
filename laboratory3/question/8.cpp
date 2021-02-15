#include<iostream>
using namespace std;
class student{
   string studName;   int studRollno;   string studBranch;
   public:
   void set(string name,int roll,string branch){
       studName=name;       studRollno=roll;       studBranch=branch;
   }
   void show(){
       cout<<"stud name is "<<studName<<endl;
       cout<<"The student name is "<<studName<<endl;
       cout<<"The student roll no is "<<studRollno<<endl;
       cout<<"The student branch is "<<studBranch<<endl;
   }
};
int main(){
   string sName, sBranch;   int roll;       student s;
   for(int i=0;i<5;i++){
       cout<<"enter student name ";       cin>>sName;
       cout<<"enter student roll no ";       cin>>roll;
       cout<<"enter student branch ";       cin>>sBranch;
       s.set(sName,roll,sBranch);
   }
   cout<<"entered data of student is\n\n";
   for(int j=0;j<5;j++){
       s.show();
   }
}
