#include<stdio.h>
int main(){
    int n;
    printf("Enter Your Days:");
    scanf("%d",&n);
    int ib;
    printf("Enter Your Intial Balance:");
    scanf("%d",&ib);
    int i=1;
    int tran;
    int count=0;
    int rep=0;
    while(i<=n){
        printf("Enter Your Trans Details %d:",i);
        scanf("%d",&tran);
        ib+=tran;
        if(ib<=2000 && rep==0){
            count++;
            rep=1;
        }
        else if(ib>2000){
            rep=0;
        }
        i++;
   }
   printf("Final Balance:%d\n",ib);
   printf("Low Balance Days:%d\n",count);
}

