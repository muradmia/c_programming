#include<stdio.h>  
#include<string.h>
int main(){

    char a[100];
    char b[100];

    scanf("%s",a);
    scanf("%s",b);
    strcpy(a,b);

    /*for(int i=0;i <=strlen(b);i++){
        a[i] = b[i];
    }*/
    printf("%s",a);


    return 0;
}