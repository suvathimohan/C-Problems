#include<stdio.h>
int main(){
    int n;
    printf("Enter your num");
    scanf("%d",&n);
    int count=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            count;
        }
        else{
            count++;
        }
    }
    printf("%d",count);
}