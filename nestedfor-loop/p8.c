#include<stdio.h>
int main(){
    int sp=0;
    int st=9;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=sp;j++){
            printf(" ");
        }
        for(int k=1;k<=st;k++){
            printf("*");
        }
        printf("\n");
        sp++;
        st-=2;
    }
}