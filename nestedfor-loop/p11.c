#include<stdio.h.>
int main(){
    int a=1;
    int b=0;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0){
                if(j%2==0){
                    printf("%d",a+b);
                }
                else{
                    printf("%d",a*b);
                }
            }
            else{
                if(j%2==0){
                    printf("%d",a*b);
                }
                else{
                    printf("%d",a+b);
                }
            }
        }
        printf("\n");
    }
}