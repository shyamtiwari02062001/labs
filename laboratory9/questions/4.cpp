#include <iostream>
using namespace std;
void fun(int data) throw(int, char)
{
    if (data == 0)
    {
        throw data;
    }
    else
    {
        if (data == 1)
            throw 'a';
        else if (data == 2)
        cout<<"\n Input is double";
    }
}
int main(void){
    try{
        fun(0);
    }
    catch(int i){
        cout<<"\n Caught an integer\n";
    }
    catch(char c){
        cout<<"\n Caught char";
    }
}