#include<stdio.h>
int main(){
    char a;
    printf("Enter your Key:");
    scanf("%d",&a);
    if(a>=(48) && a<=(57)){
        printf("Digit");
    }
    else if(a>=(65) && a<=(90)){
        printf("Capital albhabet");
    }
    else if(a>=(97) && a<=(122)){
        printf("Small albhabet");
    }
    else{
        printf("Special Char!");
    }
}


