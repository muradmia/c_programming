#include<stdio.h>
int even_count(int *arr,int size){
    int e_count = 0;
    for(int i=0;i<size;i++){
        if(*(arr+i) %  2 != 0){
            e_count++;
        }
    }
    return e_count;
}
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    int size = sizeof(arr)/sizeof(int);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int res = even_count(arr,size);
    printf("%d",res);

    return 0;
}