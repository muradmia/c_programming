#include<stdio.h>
#include<string.h>
char count(char *s){
    return strlen(s);
}
int main(){


    char s[100001];
    scanf("%s",s);
    int res = count(s);
    printf("%d",res);



    return 0;
}