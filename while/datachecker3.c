#include<stdio.h>
int main(){
    int td;
    printf("Enter your total Data:");
    scanf("%d",&td);
    int n;
    printf("Enter your days.");
    scanf("%d",&n);
    int i=1;
    int dataused=0;
    int datas;
    while(i<=n){
        printf("Enter your daily usages:");
        scanf("%d",&datas);
        if(td>0){
            td-=datas;
            dataused++;
        }
        i++;
    }
    printf("Data Used:%d\n",dataused);
    printf("Remaining Data:%d-GB",td);
}