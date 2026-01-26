#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a two numbers:");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("%d id grater than %d",a,b);
    }
    else{
        printf("%d id grater than %d",b,a);
    }
}