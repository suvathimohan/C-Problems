#include<stdio.h>
int main(){
    int oa;
    int st;
    printf("Enter your OrderAmount:");
    scanf("%d",&oa);
    printf("Enter your SpeedType:\n");
    printf("1.Normal\n");
    printf("2.Express\n");
    scanf("%d",&st);
    switch (st)
    {
    case 1:
        printf("Delivery Charge:50.");
        break;
    case 2:
        if(oa<1000){
            printf("Delivery Charge:100.");
        }
        else{
            printf("Delivery Charge is free!.");
        }
    default:
        break;
    }
}