#include<stdio.h>
int main(){

    double d = 20.1;
    double *ptr = &d;
    double *ptr2 = ptr;

    *ptr2 = 232.3;

    printf("%0.lf",d);



    return 0;
}