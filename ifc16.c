#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter ur angles:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && a==c && b==c && c==b){
        printf("equilateral.");
    }
    else{
        printf("Not equilateral.");
    }
}