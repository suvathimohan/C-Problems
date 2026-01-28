#include<stdio.h>
int main(){
    int ct;
    int min;
    printf("Enter your cty.");
    scanf("%d",&ct);
    printf("Enter your min.");
    scanf("%d",&min);
    switch (ct)
    {
    case 1:
        printf("%d",min*1);
        break;
    case 2:
        printf("%d",min*3);
        break;
    case 3:
        printf("%d",min*10);
        break;
    default:
        break;
    }
}