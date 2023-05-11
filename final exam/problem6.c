#include<stdio.h>
int main(){

    int x,y,t,xcount= 0,ycount= 0;
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        scanf("%d %d",&x,&y);

        if(x > y){
            xcount++;
        }else if(x < y){
            ycount++;
        }else{
            xcount++;
            ycount++;
        }
    }

    if(xcount > ycount){
        printf("Tiger");
    }else if(ycount > xcount){
        printf("Pathan");
    }else{
        printf("Draw");
    }



    return 0;
}