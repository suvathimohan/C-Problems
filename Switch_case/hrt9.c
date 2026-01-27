#include<stdio.h>
int main(){
    int rt;
    char cs;
    printf("Enter your room type:\n");
    printf("1.Standard\n");
    printf("2.Deluxe\n");
    scanf("%d",&rt);
    printf("Enter your char season:\n");
    printf("A-Peak\n");
    printf("B-Off\n");
    printf("C-Peak\n");
    printf("D-Off\n");
    scanf(" %c",&cs);
    switch (rt)
    {
    case 1:
        if(cs='A'){
            printf("2500");
        }
        else{
            printf("2000");
        }
        break;
    case 2:
        if(cs='C'){
            printf("4000");
        }
        else{
            printf("3000");
        }
        break;
    default:
        break;
    }
}