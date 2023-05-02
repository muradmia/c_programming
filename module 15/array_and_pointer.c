#include<stdio.h>
int main(){

    int arr[5] = {12,15,31,12,41};
    printf("Address of arr[0] is :%p\n",&arr[0]);
    printf("Address of arr[0] is :%p\n",arr);

    printf("Address of arr[0] is :%d\n",*(arr+1));
    printf("Address of arr[1] is :%d\n",arr[1]);
    printf("Address of arr[1] is :%d\n",*(1+arr));
    printf("Address of arr[1] is :%d\n",1[arr]);

    for(int i=0; i<5; i++){
        printf("%d ",*(arr+i));
    }

    return 0;
}