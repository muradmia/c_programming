#include<stdio.h>
int main(){

    int x = 10;
    int *ptr = &x;
    int *ptr2 = ptr;

    *ptr2 = 20;
    *ptr = 30;

    //printf("Address of x is x:%p\n",&x);
    //printf("value of x is ptr:%p\n",ptr);
    //printf("value of x is ptr2 :%p\n",ptr2);
    //printf("address of x is ptr : %p\n",&ptr);
    //printf("address of x is ptr2 : %p\n",&ptr2);
    


    printf("%d",*ptr2);

    return 0;
}