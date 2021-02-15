#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the input ";
    cin>>ch;
    try{
        if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')||(ch>='0'&&ch<='9'))
        cout<<" Input matched with data type\n";
        else 
        throw(ch);
    }
    catch(char ch){
        cout<<"\n Input is mismatched with data type"<<endl;
    }
}