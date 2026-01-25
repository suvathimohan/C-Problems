#include<stdio.h>

int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a%2==0){
        printf("Given num is even");
    }
    else{
        printf("Given num is not even");
    }
}