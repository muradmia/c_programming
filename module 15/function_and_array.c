#include<stdio.h>
void fun(int *ar,int size){
    for(int i=0;i<size;i++){
        printf("%d ",*(ar+i));
    }
}
int main(){

    int arr[5] = {10,20,30,40,50};
     int s = sizeof(arr)/sizeof(int);
    
    fun(arr,s);
    


    return 0;
}