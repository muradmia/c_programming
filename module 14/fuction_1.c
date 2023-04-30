#include<stdio.h>
int sum(int a,int b){
    int y = a + b;
    return y;
}
int main(){

    int x = sum(12,3);
    int result = sum(12,20);
    printf("%d",result);


    return 0;
}