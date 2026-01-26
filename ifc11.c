#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter your numbers:");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2){
        if(n1>n3){
            printf("%d is largest of all",n1);
        }
        else{
            printf("%d is largest of all",n3);
        }
    }
    else if(n2>n2){
        if(n2>n3){
            printf("%d is largest of all",n2);
        }
        else{
            printf("%d is largest of all",n3);
        }
    }
    else{
        printf("%d is largest of all",n3);
    }
}