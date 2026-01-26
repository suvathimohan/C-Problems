#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter your numbers:");
    scanf("%d%d",&n1,&n2);
    char c;
    printf("Enter your operations:");
    scanf(" %c",&c);
    int res;
    switch (c)
    {
    case '+':
        res = n1+n2;
        printf("%d",res);
        break;
    case '-':
        res = n1-n2;
        printf("%d",res);
        break;
    case '*':
        res = n1*n2;
        printf("%d",res);
        break;
    case '/':
        res = n1/n2;
        printf("%d",res);
        break;
    case '%':
        res = n1%n2;
        printf("%d",res);
        break;
    default:
        printf("Invalid operation!");
        break;
    }
}
