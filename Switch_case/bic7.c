#include<stdio.h>
int main(){
    int at;
    printf("Enter your acc type.\n");
    printf("1.Savings\n");
    printf("2.Fixed Deposit\n");
    scanf("%d",&at);
    int y;
    printf("Enter years.\n");
    scanf("%d",&y);
    switch (at)
    {
    case 1:
        printf("Interest 4 percent");
        break;
    case 2:
        if(y<=3){
            printf("Interest 5 percent");
        }
        else{
            printf("Interest 7 percent");
        }
    default:
        break;
    }

}