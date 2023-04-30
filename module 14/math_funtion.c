#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){

    //for ceil 
    double x;
    scanf("%lf",&x);
    int a = ceil(x);
    printf("ceil is : %d",a);

    //for floor
    int b = floor(x);
    printf("\nfloor is : %d",b);

    //round
    int r = round(x);
    printf("\nround is : %d",r);

    //for sqrt
    double d = sqrt(x);
    printf("\nsqrt is : %.3lf",d);

    //power

    double p = pow(x,2);
    printf("\npower is : %.3lf",p);

    //absoulate value
    int res = abs(x);
    printf("\nabs is : %d",res);
    



    return 0;
}