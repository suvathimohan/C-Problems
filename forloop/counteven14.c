#include<stdio.h>
int main(){
    int n;
    printf("Enter your num");
    scanf("%d",&n);
    int count=0;
    for(int i=n;n>0;){
        int digit = n%10;
        if(digit%2==0){
            count++;
        }
        n=n/10;
    }
    printf("%d",count);
}