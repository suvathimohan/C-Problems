#include<stdio.h>
int main(){
    char n;
    printf("Enter your num:");
    scanf("%c",&n);
    switch (n)
    {
    case '1':
        printf("Sunday");
        break;
    case '2':
        printf("Monday");
        break;
    case '3':
        printf("Tuesday");
        break;
    case '4':
        printf("Wednesday");
        break;
    case '5':
        printf("Thruesday");
        break;
    case '6':
        printf("Friday");
        break;
    case '7':
        printf("Saturday");
        break;
    default:
        printf("Invalid!!!");
        break;
    }
}