#include<stdio.h>
int main(){
    int n,m;
    printf("Enter your 2 nums:");
    scanf("%d%d",&n,&m);
    int a;
    printf("Enter your num of operation:");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Sum = %d",n+m);
        break;
    case 2:
        printf("Sub = %d",n-m);
        break;
    case 3:
        printf("Mul = %d",n*m);
        break;
    case 4:
        printf("Div = %d",n/m);
        break;
    case 5:
        printf("Mod = %d",n%m);
        break;
    default:
        printf("Entered Num Is Not Available!");
        break;
    }

}