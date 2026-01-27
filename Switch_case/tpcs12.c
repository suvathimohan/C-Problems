#include<stdio.h>
int main(){
    int vety;
    printf("Vehicle Type:\n 1.car\n 2.Truck\n");
    scanf("%d",&vety);
	int tr;
    printf("Vehicle Trip count:1-30\n");
    scanf("%d",&tr);
    int tka=240;
    switch (vety)
    {
    case 1:
        if(tr==1){
            printf("100");
        }
        else if(tr>=2 && tr<=10){
            printf("800 (Monthly Pass)");
        }
        else{
            printf("₹800 (still monthly pass)");
        }
        break;
    case 2:
        if(tr==1){
            printf("240");
        }
        else if(tr>=5 && tr<=10){
            printf("%d",tr*tka);
        }
        else{
            printf("%d",tr*tka);
        }
    default:
        break;
    }
}