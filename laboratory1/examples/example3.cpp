#include<iostream>
using namespace std;
void show(const char *s){  cout<<s<<endl; cout<<"Hi"<<endl; }
void show(char *s){  cout<<s<<endl;  cout<<"Hello"<<endl;   }
int main(){
    char s[10];
    cin>>s;
    show(s);
    show("Good Morning");
    return 0;
}