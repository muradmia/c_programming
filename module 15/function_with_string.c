#include<stdio.h>
#include<string.h>

char fun(char ch[]){
    for(int i = 0;i <= strlen(ch);i++){
        printf("%c", ch[i]);
    }
}

char fun1(char *ch1){
    for(int i = 0;i <= strlen(ch1);i++){
        printf("%c", *(ch1+i));
    }
}
int main(){

    char str[20] = "murad";
    fun1(str);



    return 0;
}