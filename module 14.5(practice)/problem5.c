#include<stdio.h>
#include<ctype.h>
char capital_to_small(char c){
    char up = tolower(c);
    return up;
}

char capital_to_small1(){
    char c,res;
    scanf("%c",&c);
    res = tolower(c);
    return res;
}

void capital_to_small3(char c){
    char sa = tolower(c);
    printf("%c",sa);
}

void capital_to_small4(){
    char c,res;
    scanf("%c",&c);
    printf("%c",c+32);
}
int main(){

    //1st function
    //char c,res;
    //scanf("%c",&c);
    //res = capital_to_small(c);
    //printf("%c",res);

    //2nd function
    //capital_to_small1();

    //3rd problem
    //capital_to_small3(c);

    //4th problem
    capital_to_small4();






    return 0;
}