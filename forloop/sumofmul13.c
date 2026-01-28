#include<stdio.h>
int main(){
    int m,n;
    printf("Enter your nums:");
    scanf("%d %d",&m,&n);
    int sum=0;
    int re;
    for(int i=1;m*i<=n;i++){
        re = m*i;
        sum+=re;
    }
    printf("%d\n",sum);
}
    