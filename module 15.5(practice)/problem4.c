#include<stdio.h>
void change_it(int *p,int size){
    for(int i = 0; i < size;i++){
        if(i == size-1){
            *(p+i) = 100;
        }
    }
    for(int i = 0; i < size;i++){
        printf("%d ",*(p+i));
    }
}
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    change_it(arr,n);

    return 0;
}


