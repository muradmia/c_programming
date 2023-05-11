#include<stdio.h>
int main(){

    int n,middle;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n; i++){

        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    if(n %2 != 0){
        middle = (n+1)/2;
        printf("%d ",arr[middle-1]);
    }else{
        for(int i = n/2-1;i < n /2 +1;i++){
            printf("%d ",arr[i]);
        }
    }


    return 0;
}