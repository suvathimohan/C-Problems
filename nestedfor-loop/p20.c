#include<stdio.h>
int main(){
    int st=1;
    int sp=8;
    for(int i=1;i<=9;i++){
        for(int j=1;j<=st;j++){
            printf("*");
        }
        for(int s=1;s<=sp;s++){
            printf(" ");
        }
        for(int r=1;r<=st;r++){
            printf("*");
        }
        if(i<5){
            st++;
            sp-=2;
        }
        else{
            st--;
            sp+=2;
        }
        printf("\n");
    }
}