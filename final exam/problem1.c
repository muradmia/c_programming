#include<stdio.h>
int main(){

    int t,a,b,c,d,sum = 0;
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        scanf("%d %d %d %d",&a,&b,&c,&d);
        sum = b + c +d;
        int sub = a - sum;
        printf("%d\n",sub);
    }
    
    return 0;
}