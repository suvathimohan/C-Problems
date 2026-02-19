#include<stdio.h>
int main(){
    int r=2;int c=3;
    int d[r][c];
    int i=0;
    while(i<r){
        int j=0;
        while(j<c){
            scanf("%d",&d[i][j]);
            j++;
        }
        i++;
    }
    int i1=0;
    int com=0;
    int index=0;
    while(i1<r){
        int j1=0;
        int sum=0;
        int avg=0;
        while(j1<c){
            sum+=d[i1][j1];
            j1++;
        }
        avg=sum/c;
        if(avg>com){
            com=avg;
            index=i1+1;
        }
        i1++;
    }
    printf("%d",index);
}