#include <iostream>
using namespace std;
template <class T> void Swap(T & tmp1,T &tmp2){
    T temp;
    temp=tmp1;
    tmp1=tmp2;
    tmp2=temp;
    return;
}
int main(){
    int x=10,y=20;
    double p=10.9,q=12.34;
    char s='s',t='t';
    Swap(x,y);
    cout<<"X="<<x<<" and Y ="<<y<<endl;
    Swap(p,q);
    cout<<"P="<<p<<" and Q ="<<q<<endl;
     Swap(s,t);
    cout<<"S="<<s<<" and T ="<<t<<endl;
    char *m="hello",*n="Hi";
    Swap(m,n);
    cout<<"M = "<<m<<" and N = "<<n<<endl;
}