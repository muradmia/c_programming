#include<stdio.h>
void add(int a,int b){
    int sum = a + b;
    printf("%d\n",sum);
}
int main(){

    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);

    add(a,b);


    return 0;
}