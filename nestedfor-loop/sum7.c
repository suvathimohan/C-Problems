#include<stdio.h>
int main(){
    int space=3;
    int st=1;
    for(int i=1;i<=5;i++){
        for(int s=1;s<=space;s++){
            printf(" ");
        }
        for(int star=1;star<=st;star++){
            printf("*");
        }
        space--;
        st+=2;
        printf("\n");
    }
    return 0;
}