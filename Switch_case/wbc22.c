#include<stdio.h>
int main(){
    int ct;
    int un;
    printf("Enter your Dom.");
    scanf("%d",&ct);
    scanf("%d",&un);
    switch (ct)
    {
    case 1:
        if(un<=30){
            printf("%d",un*5);
        }
        else{
            int pay = (un*8)-100;
            printf("%d",pay);
        }
        break;
    case 2:
        printf("%d",un*10);
    default:
        break;
    }
}