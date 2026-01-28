#include<stdio.h>
int main(){
    int a,b;
    int gcd;
    printf("Enter your values.");
    scanf("%d %d",&a,&b);
    for(int i=1;i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    printf("%d",gcd);
}