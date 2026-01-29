#include<stdio.h>
int main(){
    int st=5;
    int space=0;

    for(int i=1;i<=10;i++){
        for(int j=1;j<=st;j++){
            printf("*");
        }
        for(int k=1;k<=space;k++){
            printf(" ");
        }
        for(int b=1;b<=st;b++){
            printf("*");
        }
        if(i<5){
            st--;
            space+=2;
        }
        else{
            st++;
            space-=2;
        }
        printf("\n");
    }
}