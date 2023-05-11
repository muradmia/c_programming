#include<stdio.h>
void fun(int x){
    if(x == 6){
        return;
    }
    fun(x+1);//2 3 4 5
    printf("%d ",x);
}
int main(){

    fun(1);

    return 0;
}