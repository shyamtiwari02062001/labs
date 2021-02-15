#include<stdio.h>
int main(){
    int num=5;
    int *ptr;
    void *g;
    ptr=&num;
    printf("Value of num is %d\n",num);
    printf("The address of the integer pointer is %x \n",ptr);
    printf("The address of the generic pointer is %x \n",g);
}