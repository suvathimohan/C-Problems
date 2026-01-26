#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter ur angles:");
    scanf("%d%d%d",&a,&b,&c);
    int sum = a+b+c;
    if(sum==180){
        printf("It's Triangle");
    }
    else{
        printf("It's Not a Triangle");
    }
}


