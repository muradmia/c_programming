#include<stdio.h>
void fun(int x){
    x = 40;
    printf("fun ar x :%d\n",x);
    printf("address of fun ar x : %p",&x);
}
int main(){

    int x = 20;
    printf("main ar x :%d\n",x);
    printf("main  ar x ar address :%p\n",&x);
    fun(x);
   



    return 0;
}