#include<stdio.h>
//b is global variable
int b = 300;
void fun(){
    int s = 100;
    printf("Address of s is :%p\n",&b);
}
int main(){

    int s = 200;
    printf("Address of s is :%p\n",&b);
    fun();



    return 0;
}