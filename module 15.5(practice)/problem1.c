#include<stdio.h>
#include<math.h>
int my_abs(int x){
    if(x < 0){
        return x * -1;
    }else{
        return x;
    }
}
int main(){

    int x;
    scanf("%d",&x);
    int result = my_abs(x);
    printf("result = %d\n",result);

    return 0;
}