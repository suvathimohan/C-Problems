#include<stdio.h>
int main(){
    int a;
    printf("Enter ur num:");
    scanf("%d",&a);
    if(a>0){
        printf("Given num is positive");
    }
    else if(a=0){
        printf("Given num is Zero");
    }
    else{
        printf("Given num is negative");
    }
}
