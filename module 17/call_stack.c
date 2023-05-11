#include<stdio.h>
void word(){
    printf("Word\n");
}
void hello(){
    word();
     printf("Hello\n");
}
int main(){

    hello();
    word();
    printf("end stack\n");

    return 0;
}