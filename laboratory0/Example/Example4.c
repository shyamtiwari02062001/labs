#include<stdio.h>
typedef struct poimt {
    double x,y;
    void getval(){
        scanf("%lf %lf",&x,&y);
    }
    void show(){
        printf("X = %d y = %d \n",x,y);
    }
}Point;
int main(){
    Point p;
    p.getval();
    p.show();
    return 0;
}