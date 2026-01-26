#include<stdio.h>
int main(){
    char c;
    printf("Enter your key:");
    scanf("%c",&c);
    if(c>=48 && c<=57){
        printf("Digit");
    }
    else{
        printf("Invalid num");
    }
}