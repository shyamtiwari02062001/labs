#include<iostream>
using namespace std;
#define SIZE 5
class stack{
    int stck[SIZE];
    static int top;
    public:
    void push(int i){
        if(top==SIZE-1){
            cout<<"stck is full\n";
        }
        stck[++top]=i;
    }
    int pop(){
        if(top==-1){
            cout<<"Stack underflow\n";
            return 0;
        }
        return stck[top--];
    }
};
int stack::top=-1;
int main(){
    stack st;
    st.push(5);
    st.push(10);
    st.push(20);
    cout<<"Popped element is "<<st.pop()<<endl;
    cout<<"Popped element is "<<st.pop()<<endl;
    st.push(25);
    st.push(210);
    st.push(245);
    st.push(224);
    system("pause");
    return 0;
}