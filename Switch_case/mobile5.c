#include<stdio.h>
int main(){
    int pt;
    printf("Enter your plan type:\n");
    printf("Plan 1 - 199\n");
    printf("Plan 2 - 399\n");
    printf("UPI-11 / Card-12- 20 cashback\n");
    printf("Wallet-13 - No cashback\n");
    scanf("%d",&pt);
    char paymentMode[20];
    printf("Enter your paymentMode:\n");
    scanf("%s",&paymentMode);
    switch (pt)
    {
    case 1:
        printf("Pay 179");
        break;
    case 2:
        printf("Pay 399");
        break;
    default:
        break;
    }
}