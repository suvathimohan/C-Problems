#include<stdio.h>
int main(){
    int n=123;
    int rev=0;
    
    for(int i=n;n>0;){
        int digit = n%10;
        rev = (rev*10)+digit;
        n=n/10;
    }
    printf("%d",rev);
}