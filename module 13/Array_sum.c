#include<stdio.h>
int main(){

    int n,x;
    scanf("%d",&n);
    int arr[n],flag = 0;

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    scanf("%d",&x);

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
           if(arr[i] + arr[j] == x){
                flag = 1;
                break;
           }
        }
    }

    if(flag == 1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
}