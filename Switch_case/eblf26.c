#include<stdio.h>
int main(){
    int t,dt;
    printf("Enter your type");
    scanf("%d",&t);
    printf("Enter your delay days");
    scanf("%d",&dt);

    switch (t)
    {
    case 1:
        if(dt<=5){
            printf("%d",50*dt);
        }
        else if(dt<=10){
            printf("%d",100*dt);
        }
        else{
            printf("%d",200*dt);
        }
        break;
    
    default:
        break;
    }
    
}