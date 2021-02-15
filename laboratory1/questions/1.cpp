#include<iostream>
using namespace std;
int absolute(int x){
    if(x<0){ return (-x); }
    else{ return x; }
}
float absolute(float x){
    if(x<0){ return (-x); }
    else{ return x;  }
}
double absolute(double x){
    if(x<0){ return (-x);  }
    else{ return x; }
}
long absolute(long x){
    if(x<0){ return (-x);  }
    else{  return x;  }
}
int main(){
    cout<<absolute(-5)<<endl;
    cout<<absolute(-5.5)<<endl;
    cout<<absolute(10L)<<endl;
    cout<<absolute(-10.11f)<<endl;
}