#include<stdio.h>
int main(){
    int ma,att;
    printf("Enter your marks:");
    scanf("%d",&ma);
    printf("Enter your attendance:");
    scanf("%d",&att);
    if(ma<50){
        printf("Fail");
    }
    else if(ma>=50 && ma<=74 && att>=75){
        printf("Pass");
    }
    else if(ma>=75 && att>=75){
        printf("Distinction");
    }
    else{
        printf("Fail");
    }
}