#include<stdio.h>
int main(){

    int n,i,j,k;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        for(j=0; j<n-i; j++){
            printf(" ");
        }
        for(k = i*2-1;k > 0;k--){
            if(i % 2 == 0){
                printf("*");
            }else{
                printf("^");
            }
        }
        printf("\n");
    }


    return 0;
}