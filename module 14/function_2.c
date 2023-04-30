#include<stdio.h>

int sum(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int s = a + b;
    return s;
}

int main(){

    int result = sum();
    printf("%d\n",result);




    return 0;
}