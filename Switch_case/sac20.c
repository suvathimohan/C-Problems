#include<stdio.h>
int main(){
    int op;
    printf("Choose tpe: 1 or 2.\n");
    scanf("%d",&op);
    int time;
    printf("Choose time: 0 or 24hrs.\n");
    scanf("%d",&time);
    switch (op)
    {
    case 1:
        printf("Full access anytime");
        break;
    case 2:
        if(time>=9 && time<=20){
            printf("Limited Access");
        }
        else{
            printf("Access Denied");
        }
    default:
        break;
    }
}