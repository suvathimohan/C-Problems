#include<stdio.h>
int main(){
    int st=1;
    for(int i=1;i<=9;i++){
        for(int j=1;j<=st;j++){
            printf("*");
        }
        printf("\n");
        if(i<5){
            st++;
        }
        else{
            st--;
        }
    }
}