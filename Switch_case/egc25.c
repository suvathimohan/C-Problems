#include<stdio.h>
int main(){
    int cat;
    printf("Enter your cate");
    scanf("%d",&cat);
    switch (cat)
    {
    case 1:
        printf("1200");
        break;
    case 2:
        printf("800");
        break;
    case 3:
        printf("500");
        break;
    default:
        break;
    }
}