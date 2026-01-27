#include<stdio.h>
int main(){
    
    printf("Choose your mod: 1 or 2.\n");
    int mod;
    scanf("%d",&mod);
    char op;
    printf("Choose you R or S\n");
    scanf(" %c",&op);
    switch (mod)
    {
    case 1:
        if(op=='R'){
            printf("5000");
        }
        else{
            printf("3000");
        }
        break;
    case 2:
        if(op=='R'){
            printf("9000");
        }
        else{
            printf("7000");
        }
        break;
    default:
        break;
    }
}