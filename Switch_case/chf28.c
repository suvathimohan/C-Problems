#include<stdio.h>
int main(){
    int cat;
    printf("Enter your cate");
    scanf("%d",&cat);
    switch (cat)
    {
    case 1:
        printf("80k");
        break;
    case 2:
        printf("60k");
        break;
    case 3:
        printf("45k");
        break;
    default:
        break;
    }
}