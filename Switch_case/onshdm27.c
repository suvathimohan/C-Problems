#include<stdio.h>
int main(){
    int cat;
    printf("Enter your cate");
    scanf("%d",&cat);
    switch (cat)
    {
    case 1:
        printf("40");
        break;
    case 2:
        printf("120");
        break;
    case 3:
        printf("Free");
        break;
    default:
        break;
    }
}