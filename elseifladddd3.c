#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter ur 3 num's:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("%d id grater than %d and %d",a,b,c);
        }
        else{
            printf("%d id grater than %d and %d",c,a,b);
        }
    }
    else if(b>a){
        if(b>c){
            printf("%d id grater than %d and %d",b,a,c);
        }
        else{
            printf("%d id grater than %d and %d",c,a,b);
        }
    }
    else{
        printf("%d id grater than %d and %d",c,a,b);
    }
}
