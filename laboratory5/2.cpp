#include <iostream> 
#include<cstring>
using namespace std; 
  
class names { 
     char *str1; 
     char *str2; 
     char *result; 
public: 
    names() 
    { 
        str1 = new char[6]; 
        str1 = "Shyam"; 
        str2 = new char[6]; 
        str2 = "Tiwari";
        result=new char [100];
        strcpy(result,str1);
        strcat(result,str2);
    } 
  
    void display() 
    { 
        cout << result << endl; 
    } 
}; 
  
int main() 
{ 
    names obj =  names(); 
    obj.display(); 
} 
