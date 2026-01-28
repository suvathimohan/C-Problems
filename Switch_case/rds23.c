#include<stdio.h>
int main(){
    int ct;
    int ba;
    int p;
    int bill;
    printf("Enter your cty.");
    scanf("%d",&ct);
    printf("Enter your billa.");
    scanf("%d",&ba);
    switch (ct)
    {
    case 1:
        p=(ba*5/100);
        bill = ba-p;
        printf("%d",bill);
        break;
    case 2:
        p=(ba*15/100);
        bill = ba-p;
        printf("%d",bill);
    default:
        break;
    }
}