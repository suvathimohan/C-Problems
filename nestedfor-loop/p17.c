#include<stdio.h>
int main(){
    int space=3;
    for(int i=0;i<=3;i++){
        for(int i=1;i<=space;i++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%c",'A'+j);
        }
        for(int k=i-1;k>=0;k--){
            printf("%c",'A'+k);
        }
        printf("\n");
        space--;
    }
}