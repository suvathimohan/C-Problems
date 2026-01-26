#include<stdio.h>
int main(){
    int n;
    printf("Enter your num:");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Jan has 31 days.");
        break;
    case 2:
        printf("February has 28 or 29 days.");
        break;
    case 3:
        printf("March has 31 days.");
        break;
    case 4:
        printf("April has 30 days.");
        break;
    case 5:
        printf("May has 31 days.");
        break;
    case 6:
        printf("June has 30 days.");
        break;
    case 7:
        printf("July has 31 days.");
        break;
    case 8:
        printf("Aug has 31 days.");
        break;
    case 9:
        printf("Sep has 30 days.");
        break;
    case 10:
        printf("Oct has 31 days.");
        break;
    case 11:
        printf("30 days.");
        break;
    case 12:
        printf("31 days.");
        break;
    default:
        printf("Invalid!!");
        break;
    }
}
