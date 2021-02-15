#include<stdio.h>
void fn(){
    struct str{
        enum {FALSE,TRUE} BOOL;
    };
    const int True=13;
}
int main(){
    fn();
    return 0;
}