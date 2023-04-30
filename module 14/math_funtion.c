#include<stdio.h>
#include<math.h>
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
    printf("\nsqrt is : %lf",d);

    //power

    int p = pow(x,2);
    printf("\npower is : %d",p);



    return 0;
}