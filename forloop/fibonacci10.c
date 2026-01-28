#include<stdio.h>
int main(){
    int n=2;
    int a=0;
    int b=1;
    int temp;
    for(int i=1;i<=n;i++){
        printf("%d",a);
        temp=a+b;
        a=b;
        b=temp;
    }
    printf("%d",temp);
}