#include<stdio.h>
int main(){
    int set;
    int sht;
    printf("Type 1 or 2");
    printf("show time");
    scanf("%d",&set);
    scanf("%d",&sht);
    int silver=150;
    int gold = 250;

    switch (set)
    {
    case 1:
        if(sht>=18){
            printf("%d",silver+50);
        }
        else{
            printf("%d",150);
        }
        break;
    case 2:
        if(sht>=18){
            printf("%d",gold+50);
        }
        else{
            printf("%d",250);
        }
    default:
        break;
    }
}