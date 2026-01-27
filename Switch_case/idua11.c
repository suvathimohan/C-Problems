#include<stdio.h>
int main(){
    int pt;
    float du;
    printf("Enter your plan:Type 1 or 2\n");
    scanf("%d",&pt);
    printf("Enter a data Usage:0.0 to 5.0 GB\n");
    scanf("%f",&du);
    
    switch (pt)
    {
    case 1:
        if(du<=1.00){
            printf("Normal Speed");
        }
        else{
            printf("Speed Reduced");
        }
        break;
    case 2:
        if(du<=2.00){
            printf("Normal Speed");
        }
        else{
            printf("Extra Charges Applied");
        }
    default:
        break;
    }
	
}