#include<stdio.h>
#include<ctype.h>
char char_to_ascii(char c){
    char up = toascii(c);
    return up;
}

char char_to_ascii1(){
    char c;
    scanf("%c",&c);
    return c;
}

void char_to_ascii3(char c){
    printf("%d",c);
}

void char_to_ascii4(){
    char c;
    scanf("%c",&c);
    printf("%d",c);
}
int main(){

    //1st problem
    //char c;
    //scanf("%c", &c);
   //int result = char_to_ascii(c);
   //printf("%d", result);

    //2nd problem

    //int res = char_to_ascii1();
    //printf("%d", res);

    //3rd problem
    //char_to_ascii3(c);

    //4th problem

    char_to_ascii4();





    

    return 0;
}