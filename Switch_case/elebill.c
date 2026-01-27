#include<stdio.h>
int main(){
    int unit;
    printf("enter your units:\n");
    scanf("%d",&unit);
    printf("Choose your connection Type\n");
    printf("1. Domestic\n");
    printf("2.Commercial\n");
    int c;
    scanf("%d",&c);
    int bill;
    switch (c)
    {
    case 1:
        if(unit<=100){
            bill=3*unit;
            printf("Bill amount: %d",bill);
        }
        else if(unit>=100 && unit<=200){
            bill=(100*3)+((unit-100)*5)-(80);
            printf("Bill amount: %d",bill);
        }
        else{
            bill=7*unit;
            bill=bill-80;
            printf("Bill amount: %d",bill);
        }
        break;
    case 2:
        if(unit<=100){
            bill=7*unit;
            printf("Bill amount: %d",bill);
        }
        else{
            bill=(100*7)+((unit-100)*10);
            printf("Bill amount: %d",bill);
        }
        break;
    default:
        printf("Invalid connection!");
        break;
    }
}