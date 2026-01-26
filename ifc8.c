#include<stdio.h>
int main(){
    int k;
    printf("Enter your number:");
    scanf("%d",&k);
    if(k%3==0 && k%7==0){
        printf("Multiple of both 3 and 7");
    }
}
