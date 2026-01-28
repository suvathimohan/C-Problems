#include<stdio.h>
int main(){
    int n=123;
    int sum=0;
    for(int i=n;n>0;){
        int digi = n%10;
        n=n/10;
        sum+=digi;
    }
    printf("%d",sum);
}