#include<stdio.h>
int main(){
    int vt,dis;
    printf("Type:");
    scanf("%d",&vt);
    printf("Dis:");
    scanf("%d",&dis);

    switch (vt)
    {
    case 1:
        printf("%d",dis*10);
        break;
    case 2:
        printf("%d",dis*15);
        break;
    case 3:
        printf("%d",dis*20);
        break;
    default:
        break;
    }
}