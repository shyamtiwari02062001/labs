#include<iostream>
using namespace std;

class A {
public:
   int x, y, s;
    int num;
   void get() {
       cout << "Enter any numbers:";
       cin >>num;
   }
};

class B : public A {
public:

   void input1() {
       cout << "Enter number 1:";
       cin >>x;
   }
};
class C : public B {
public:
void input2() {
       cout << "Enter number 2:";
       cin >>y;
   }
};
class D : public C {
public:

   void add() {
       s=x+y;
     cout<< "Sum is:" << s<<endl;
   }
};

int main() {

   D d;
   d.input1();
   d.input2();
   d.add();
   return 0;
}