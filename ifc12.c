#include<stdio.h>
int main(){
    int m;
    printf("Enter your marks:");
    scanf("%d",&m);
    if(m>=91 && m<=100){
        printf("Grade A");
    }
    else if(m>=75 && m<=90){
        printf("Grade B");
    }
    else if(m>=60 && m<=75){
        printf("Grade C");
    }
    else{
        printf("Grade D");
    }
}