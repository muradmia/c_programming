#include<stdio.h>
int swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;

    return *x,*y;
}
int main(){

    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);

    swap(&x,&y);
    printf("%d %d\n",x,y);


    return 0;
}