#include<stdio.h>
int main(){
    int a,b;
    printf("Enter your numbers:");
    scanf("%d%d",&a,&b);
    char s;
    printf("Choose your operation:");
    scanf(" %c",&s);
    switch (s)
    {
    case '+':
        printf("Addition of %d and %d is %d",a,b,a+b);
        break;
    case '-':
        printf("Subtraction of %d and %d is %d",a,b,a-b);
        break;
    case '*':
        printf("Multiplication of %d and %d is %d",a,b,a*b);
        break;
    case '/':
        printf("Division of %d and %d is %d",a,b,a/b);
        break;
    case '%':
        printf("Modulos of %d and %d is %d",a,b,a%b);
        break;
    default:
        printf("Given expression is not valid!");
        break;
    }
}
