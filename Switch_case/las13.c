#include<stdio.h>
int main(){
    int lont;
    printf("Loan Type:\n 1 or 2.\n");
    scanf("%d",&lont);
	int cs;
    printf("Enter your cretits score:300-900\n");
    scanf("%d",&cs);
    switch (lont)
    {
    case 1:
        if(cs>=650 && cs<=699){
            printf("Manual Review");
        }
        else{
            printf("Approved");
        }
        break;
    case 2:
        if(cs<700){
            printf("Rejected");
        }
        else{
            printf("Approved");
        }
    default:
        break;
    }
	
}