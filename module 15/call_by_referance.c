#include<stdio.h>
void fun(int *p){

    printf("value of p is :%p\n",p);
    *p = 300;


}
int main(){

    int x = 10;
    printf("Adress of x is :%p\n",&x);
   
    fun(&x);
     printf("\nValue of x is :%d",x);


    return 0;
}