#include<stdio.h>
#include<string.h>
int main(){

    char s[100001];
    int i = 0,capcount = 0,smallcount = 0,space_count = 0;
   gets(s);

    while(s[i] != '\0'){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            capcount++;
        }else if(s[i] >= 'a' && s[i] <= 'z'){
            smallcount++;
        }else if(s[i] == ' '){
            space_count++;
        }
        i++;
    }

    printf("Capital - %d\n",capcount);
    printf("Small - %d\n",smallcount);
    printf("Space - %d\n",space_count);

    return 0;
}