#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class number{
    int i=0;
    int num;
    int arr[1000];
    public:
    void set(int x){
        num=x;
    }
    void count(){
        while(num!=0){
            arr[i]=num%10;
            num=num/10;
            i++;
        }
    }
    void show(){
        int count=0;
         sort(arr, arr + i);
        for(int j=0;j<i;j++){
            for(int k=0;k<i;k++){
                if(arr[j]==arr[k]){
                    count++;
                }
            }
            cout<<arr[j]<<" is "<<count<<" times in number\n";
            count=0;
        }
    }
};
int main(){
    number n;
    n.set(2121232421);
    n.count();
    n.show();
}