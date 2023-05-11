#include<stdio.h>
int len(char *s,int i){
    if(s[i] == '\0') return 0;

    int l = len(s,i+1);
    return l+1;
    
}
int main(){

    char s[100001] = {"murad"};
    int result = len(s,0);

    printf("%d\n",result);

    return 0;
}