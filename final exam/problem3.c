#include<stdio.h>
int main(){

    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    
    for(int j = 0;j<m;j++){
        printf("%d ",arr[n-1][j]);
    }

    printf("\n");

    for(int j = 0;j<n;j++){
        printf("%d ",arr[j][m-1]);
    }
    


    return 0;
}