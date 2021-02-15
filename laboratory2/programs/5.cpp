#include<iostream>
using namespace std;
int increment(int &a){  a++; return(a); }
int main(){
    int arr[10],n;
    cout<<"enter the array length\n";
    cin>>n;
    for(int i=0;i<n;i++){ 
        cout<<"Enter "<<i+1<<" array element"<<endl;
        cin>>arr[i];
    }    for(int i=0;i<n;i++){ 
        cout<<i+1<<" array element is\n";
        cout<<increment(arr[i])<<endl;
    }
}