#include<stdio.h>
int main(){
    int st=1;
    int space=4;
    int row=9;
    for(int i=1;i<=9;i++){
        for(int j=1;j<=space;j++){
            printf(" ");
        }
        for(int k=1;k<=st;k++){
            printf("*");
        }
        printf("\n");
        if(i<5){
            space--;
            st+=2;
        }
        else{
            space++;
            st-=2;
        }
    }
}