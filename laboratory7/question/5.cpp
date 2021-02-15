#include<iostream>
using namespace std;
int main(){
    float farenheit,celcius;
    int choice;
    cout<<"Press 1: farenheit to celcius"<<endl;
    cout<<"Press 2: celcius to farenheit"<<endl;
    cin>>choice;
    if(choice==1){
        cout<<"Enter the farenheit value "<<endl;
        cin>>farenheit;
        celcius=(farenheit-32)/1.8; 
        cout<<"It is "<<celcius <<" degree celcius"<<endl;
    }
    else if(choice==2){
        cout<<"Enter the farenheit value "<<endl;
        cin>>farenheit;
        farenheit=(celcius*1.8)+32;
        cout<<"It is "<<farenheit <<" degree farenheit"<<endl;
    }
    else{
        cout<<"Wrong Input\n";
    }
}