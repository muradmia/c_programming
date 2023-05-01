#include<stdio.h>
#include<ctype.h>

char  small_to_capital(char c){
    char up = toupper(c);
    return up;
}

char small_to_capital1(){
    char c;
    scanf("%c", &c);
    return c-32;
}

void small_to_capital3(char c){
    char up = toupper(c);
    printf("%c",up);
}

void small_to_capital4(){
    char c;
    scanf("%c", &c);
    char res = toupper(c);
    printf("%c",res);
}
int main(){

    //1st function
    //char c,res;
    //scanf("%c", &c);
    //res = small_to_capital(c);
    //printf("%c",res);

    //2nd funtion
    //char res = small_to_capital1();
    //printf("%c",res);

    // 3rd function
    //small_to_capital3(c);

    //4th function
    small_to_capital4();


    

    return 0;
}