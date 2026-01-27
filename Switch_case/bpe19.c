#include<stdio.h>
int main(){
    int c,d;
    printf("User Category: 1 or 2\n");
    scanf("%d",&c);
    printf("Distance Travelled: 1 to 100 km\n");
    scanf("%d",&d);

    switch (c)
    {
    case 1:
        if(d<=30){
            printf("Eligible");
        }
        else{
            printf("Eligible with Extra Fee");
        }
        break;
    case 2:
        if(d<=30){
            printf("Eligible");
        }
        else{
            printf("Not Eligible");
        }
        break;
    default:
        printf("Eligible");
        break;
    }
}