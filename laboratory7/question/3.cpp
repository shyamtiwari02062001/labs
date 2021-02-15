#include<iostream>
#include<string.h>
using namespace std;
class Addstring{
    public: 
    char str[100];
    Addstring(){}
    Addstring(char str[]){
        strcpy(this->str,str);
    }
    Addstring operator+(Addstring& s2){
        Addstring s3;
        strcat(this->str,s2.str);
        strcat(s3.str,this->str);
        return s3;
    }
};
int main(){
    char str1[]="My ";
    char str2[]="name is Shyam Tiwari";
    Addstring a1(str1);
    Addstring a2(str2);
    Addstring a3;
    a3=a1+a2;
    cout<<"Concatenation of the string are : "<<a3.str;
    return 0;
}