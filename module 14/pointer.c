#include<stdio.h>
int main(){

    int a = 10;
    int *p = &a;
    printf("a = %d\n", *p);

    *p = 300;
    printf("a = %d\n", a);



    return 0;
}