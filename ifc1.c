#include<stdio.h>
int main(){
    int n;
    printf("Enter your Number:");
    scanf("%d",&n);
    if(n>0){
        printf("%d is +ive number",n);
    }
    else if(n==0){
        printf("%d is zero",n);
    }
    else{
        printf("%d is -ive number",n);
    }
}