#include<stdio.h>
int main(){
    int a=7;
    int c=a;
    int b=3;
    printf("%d",a/=b);
    printf("%d",c%=b);
}