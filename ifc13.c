#include<stdio.h>
int main(){
    char k;
    printf("Enter your letter:");
    scanf("%c",&k);
    if(k>=65 && k<=90){
        printf("Uppercase");
    }
    else if(k>=97 && k<=122){
        printf("Lowercase");
    }
    else{
        printf("Given i/p is not valid!");
    }
}