#include<stdio.h>
int main(){
    int at;
    int balance;
    int wa=8000;
    printf("Enter your acc type:\n");
    printf("Type 1 - Saveing Acc\n");
    printf("Type 2 - Current Acc\n");
    scanf("%d",&at);
    printf("Enter your balance:\n");
    scanf("%d",&balance);
    printf("Enter your withdrawAmount:\n");
    scanf("%d",&wa);

    switch (at)
    {
    case 1:
        if(balance>=wa){
            printf("Transaction Successfull");
        }
        break;
    case 2:
        if(wa<=5000){
            printf("Transaction Successfull");
        }
        else{
            printf("Limit Exceeded");
        }
        break;
    default:
        break;
    }
}