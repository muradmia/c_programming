#include<stdio.h>

void print(int *arr,int size){
    for(int i=0;i<size;i++){
        printf("%d ",*(arr+i));
    }
}

void recur(int *arr,int size,int i){
    if(i == size){
        return;
    }

    printf("%d ",*(arr+i));
    recur(arr,size,i+1);
}
int main(){

    int arr[5] = {10,20,30,40,50};
    recur(arr,5,0);
   

    return 0;
}