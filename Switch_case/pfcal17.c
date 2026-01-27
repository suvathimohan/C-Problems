#include<stdio.h>
int main(){
    int vt,h;
    printf("Type: 1 or 2.\n");
    scanf("%d",&vt);
    printf("Hours: 1 to 24 \n");
    scanf("%d",&h);

    switch (vt)
    {
    case 1:
        printf("%d",h*10);
        break;
    case 2:
        printf("%d",h*20);
        break;
    default:
        printf("%d",20);
    }
}